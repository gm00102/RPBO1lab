#include "Header.h"
string ReadPersonName()
{
	string name;
	cout << "������� ��� ��������: ";
	cin.ignore();
	getline(cin, name);
	return name;
}
