#include <iostream>
#include <string>
using namespace std;

extern unsigned short Height=0;
extern string salary = "";

unsigned short ReadPersonAge() {
	unsigned short Age;
	cout << "Vash vozrast: ";
	cin >> Age;
	return Age;
}

string ReadPersonName() {
	string name;
	cout << "Vashe imia: ";
	cin >> name;
	return name;
}

void ReadPersonHeight() {
	cout << "Vash rost: ";
	cin >> Height;
}

void ReadPersonWeight(unsigned short& Weight) {
	cout << "Vash ves: ";
	cin >> Weight;
}

void ReadPersonSalary(double* Salary) {
	cout << "Vash zarplata: ";
	cin >> *Salary;
}

void ReadPersonData(string& Name, unsigned short& Age,double& Salary) {
	cout << "Vashe imia: ";
	cin >> Name;
	cout << "Vash vozrast: ";
	cin >> Age;
	cout << "Vash zarplata: ";
	cin >> Salary;
}

void ReadPersonData(string& Name,unsigned short& Age, unsigned short& Height, unsigned short& Weight) {
	cout << "Vashe imia: ";
	cin >> Name;
	cout << "Vash vozrast: ";
	cin >> Age;
	cout << "Vash rost: ";
	cin >> Height;
	cout << "Vash ves: ";
	cin >> Weight;
}

void WritePersonData(string& Name, string& Height,string& Weight, unsigned short* Age) {
	cout << "Name=" << Name << " Height=" << Height << " Weight=" << Weight << " Age=" << * Age << " Salary=" << salary;
}

int main(){
	string Name;
	unsigned short Age;
	unsigned short Height1;
	unsigned short Weight1;
	double Salary1=10;
	double* Salary=&Salary1;
	ReadPersonData(Name, Age, Height1, Weight1);
	ReadPersonSalary(Salary);
	salary = to_string(*Salary);
	string Height2 = to_string(Height1);
	string Weight2 = to_string(Weight1);
	unsigned short* Age1 = &Age;
	WritePersonData(Name, Height2, Weight2, Age1);
	return 0;
}