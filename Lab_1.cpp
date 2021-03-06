
#include "pch.h"
#include "vector_func's.h"

using namespace std;
using namespace math_subjects;

int main() {
	setlocale(LC_ALL, "Rus");
	vector a(1, 1, 1);
	vector b(1.2,3.4,5.6);

	a.norm();
	a.print();

	atan2(sinus(a, b), cosin(a, b));
	cout << "Atan = " << atan2(sinus(a, b), cosin(a, b)) << endl;
	cout << "Angle between sin&cos = " << angle_between(a, b) << endl;

	return 0;
}