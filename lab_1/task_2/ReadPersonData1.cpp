#include "Header.h"
void ReadPersonData(string& name, unsigned short& age, double& salary)
{
	cout << endl << "����� ������ ������� ReadPersonData" << endl;
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}
