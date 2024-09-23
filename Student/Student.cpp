#include <iostream>
#include <Windows.h>
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
	Student(const char * _fullName, const char * _dateOfBirth, const char * _phoneNumber, const char *_institution, const char * _group) {
		fullName = new char[strlen(_fullName) + 1];
		strcpy_s(fullName, strlen(_fullName) + 1, _fullName);

		dateOfBirth = new char[strlen(_dateOfBirth) + 1];
		strcpy_s(dateOfBirth, strlen(_dateOfBirth) + 1, _dateOfBirth);

		phoneNumber = new char[strlen(_phoneNumber) + 1];
		strcpy_s(phoneNumber, strlen(_phoneNumber) + 1, _phoneNumber);

		institution = new char[strlen(_institution) + 1];
		strcpy_s(institution, strlen(_institution) + 1, _institution);

		group = new char[strlen(_group) + 1];
		strcpy_s(group, strlen(_group) + 1, _group);
	}
	
	~Student()
	{
		if (fullName, dateOfBirth, phoneNumber, institution, group != nullptr)
		{
			delete[] fullName, dateOfBirth, phoneNumber, institution, group;
		}
};

// Реализуйте функции-члены класса для ввода данных, вывода данных, реализуйте
// аксессоры для доступа к отдельным переменным-членам.
// Добавьте необходимые конструкторы, деструктор.
int main(){
	
}