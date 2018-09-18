#ifndef HEADER_H
#define HEADER_H

template<typename V>

class vec3 {

	V x, y, z;

public:
	vec3() {};
	vec3(V x1, V y1, V z1) {
		x = x1;
		y = y1; 
		z = z1;
	};
	vec3(V xi, V xf, V yi, V yf, V zi,V zf) {
		x = xf-xi;
		y = yi-yf;
		z = zi-zf;
	};

	vec3 operator + (const vec3& vec) {

		vec3 v3;

		v3.x = this->x + vec.x;
		v3.y = this->y + vec.y;
		v3.z = this->z + vec.z;

		return v3;
	}

	vec3 operator - (const vec3& vec) {

		vec3 v3;

		v3.x = this->x - vec.x;
		v3.y = this->y - vec.y;
		v3.z = this->z - vec.z;

		return v3;
	}

	vec3 operator += (const vec3& vec) {

		vec3 v3;

		v3.x = this->x += vec.x;
		v3.y = this->y += vec.y;
		v3.z = this->z += vec.z;

		return v3;
	}

	vec3 operator -= (const vec3& vec) {

		vec3 v3;

		v3.x = this->x -= vec.x;
		v3.y = this->y -= vec.y;
		v3.z = this->z -= vec.z;

		return *this;
	}


	vec3 operator = (const vec3& vec) {

		vec3 v3;

		v3.x = this->x = vec.x;
		v3.y = this->y = vec.y;
		v3.z = this->z = vec.z;

		return *this;
	}


	bool operator == (const vec3& vec) {

		if (this->x == vec.x && this->y == vec.y && this->z == vec.z) {
			return true;
		}

		
		return false;
		
		
		
	}

	//Normalize funcion
	/*void normalize() {
		V len;
		vec3 vec; //auxiliar
		vec=sqrt((pow(this->x, 2)) + (pow(this->y, 2))+(pow(this->z, 2))); //auxiliar=raiz cuadradada de X,Y,Z elevados al quadrado(modulo)
		this->x = this->x / len; // Valor x entre modulo
		this->y = this->y / len; // Valor y entre modulo
		this->z = this->z / len; // Valor x entre modulo
	}*/
	//Zero funcion
	vec3 zero() {
		this->x = 0;
		this->y = 0;
		this->z = 0;
		return *this;

	}

	//Is Zero funcion
	bool iszero() {
		if (this->x == 0 && this->y == 0 && this->z == 0) {
			return true;
		}
		return false;
	
	}

	//Distance to funcion
	float distanceto(const vec3& vec) {
			float dist;
			vec3 v1;
			v1.x = -this->x + vec.x;
			v1.y = -this->y + vec.y;
			v1.z = -this->z + vec.z;
			dist = sqrt(pow(v1.x, 2) + pow(v1.y, 2) + pow(v1.z, 2));
			return dist;
		}
	

	//Print the vectors
	void Print() const {
	std::cout << "(" << this->x << ", " << this->y << ", " << this->z << ")" << std::endl;
}
};






#endif
