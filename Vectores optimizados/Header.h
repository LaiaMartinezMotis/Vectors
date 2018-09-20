#ifndef HEADER_H
#define HEADER_H

template<typename type>

class vec3 {

	type x, y, z;

public:
	vec3() {};
	vec3(const type& x, const type&  y, const type&  z) : x(x), y(y), z(z) {

	};
	
	vec3 operator + (const vec3& vec) const {

		return vec3(x + vec.x, y + vec.y, z + vec.z);
	}

	vec3 operator - (const vec3& vec) const {

		return vec3(x - vec.x, y - vec.y, z - vec.z);

	}

	vec3 operator += (const vec3& vec) {
		x += vec.x;
		y += vec.y;
		z += vec.z;

		return *this;
	}

	vec3 operator -= (const vec3& vec) {
		x -= vec.x;
		y -= vec.y;
		z -= vec.z;

		return *this;
	}


	vec3 operator = (const vec3& vec) {

		x = vec.x;
		y = vec.y;
		z = vec.z;

		return *this;
	}


	bool operator == (const vec3& vec)  const {

		return  (this->x == vec.x && this->y == vec.y && this->z == vec.z);
	}

	//Normalize funcion
	vec3 normalize() {
		type len = sqrt((x*x) + (y*y) + (z*z));//auxiliar=raiz cuadradada de X,Y,Z elevados al quadrado(modulo) 
		this->x = this->x / len; // Valor x entre modulo
		this->y = this->y / len; // Valor y entre modulo
		this->z = this->z / len; // Valor x entre modulo
		return *this;
	}



	//Zero funcion
	void zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	//Is Zero funcion
	bool iszero() const {
		return (this->x == 0 && this->y == 0 && this->z == 0);
	}

	//Distance to funcion
	float distanceto(const vec3& vec) const {
		vec3 v1;
		v1.x = -this->x + vec.x;
		v1.y = -this->y + vec.y;
		v1.z = -this->z + vec.z;
		return (sqrt(pow(v1.x, 2) + pow(v1.y, 2) + pow(v1.z, 2)));
	}


	//Print the vectors
	void Print() const {
		std::cout << "(" << this->x << ", " << this->y << ", " << this->z << ")" << std::endl;
	}
};






#endif
