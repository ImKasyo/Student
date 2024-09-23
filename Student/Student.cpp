#include <iostream>
#include<Windows.h>
using namespace std;

class Student {
private:
	char* fullName;
	char* dateOfBirth;
	char* phoneNumber;
	char* institution;
	char* group;
public:
	Student() {
		fullName, dateOfBirth, phoneNumber, institution, group = nullptr;
	}
	Student(const char * name, const char * dateOfBirth, const char * phoneNumber, ) {
		fullName = new char[strlen(fullName) +1];
		strcpy_s(fullName, strlen(fullName) + 1, name);
	}
	
};
// Реализуйте функции-члены класса для ввода данных, вывода данных, реализуйте
// аксессоры для доступа к отдельным переменным-членам.
// Добавьте необходимые конструкторы, деструктор.
int main(){

}