#include "Header.h"
string salary2;
void WritePersonData(string& name, const string& height, const string& weight, const unsigned short* age)
{
	cout << endl << "���: " << name << endl <<
		"����: " << height << endl <<
		"���: " << weight << endl <<
		"�������: " << *age << endl <<
		"���������� �����: " << setprecision(2) << salary2 << endl;
}
