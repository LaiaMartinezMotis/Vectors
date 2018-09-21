#include <iostream>
#include"Vector3.h"


using namespace std;
int main() {

	vec3<int>V1(1, 2, -3);
	vec3<int>V2(-5, 7, 9);
	vec3<int>V3(10, -4, 15);
	vec3<int>V4(3, 2, 1);
	vec3<int>V5(-3, 4, -1);
	vec3<int>V6;
	vec3<int>V7(2, 5, 1);
	vec3<int>V8(4, 9, 2);

	cout << "Initial Vectors:" << endl;
	cout << "V1: " << endl;
	V1.Print();

	cout << "V2: " << endl;
	V2.Print();

	cout << "V3: " << endl;
	V3.Print();

	cout << "V4: " << endl;
	V4.Print();

	cout << "V5: " << endl;
	V5.Print();

	cout << "V6: " << endl;
	V6.Print();

	cout << "V7: " << endl;
	V7.Print();

	cout << endl;

	cout << "Operators: " << endl;
	cout << endl;

	cout << "+:  V1 + V2 =" << endl;
	V6 = V1 + V2;
	V6.Print();
	cout << endl;

	cout << "-:  V3 - V4" << endl;
	V6 = V3 - V4;
	V6.Print();
	cout << endl;

	cout << "+=:  V5 += V1" << endl;
	V5 += V1;
	V5.Print();
	cout << endl;

	cout << "-=:  V5 -= V1" << endl;
	V5 -= V1;
	V5.Print();
	cout << endl;

	cout << "=:  V3 = V1" << endl;
	V3 = V1;
	V3.Print();
	cout << endl;


	cout << "Functions: " << endl;

	V7.normalize(); //Out of order
	cout << "Normalizing the vector V7: " << endl;
	V7.Print();
	cout << endl;

	V2.zero();
	cout << "2.Zero" << endl;
	cout << "Transforming all the values of V3 to 0 " << endl;
	cout << "V2 = " << endl;
	V2.Print();
	cout << endl;

	cout << "3.IsZero" << endl;
	cout << "Checking if all the values of V1 are 0" << endl;
	cout << "Yes<1> No<0>" << endl;
	cout << V1.iszero() << endl;
	cout << endl;

	cout << "4. Distance to" << endl;
	cout << "Distance between two vectors" << endl;
	cout << "Distance between V4 & V8: " << endl;
	cout << V4.distanceto(V8) << endl;



	system("pause");
	return 0;

}