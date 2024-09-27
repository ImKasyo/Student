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
	Student(const char* _fullName, const char* _dateOfBirth, const char* _phoneNumber, const char* _institution, const char* _group) {
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

	const char* getFullName(){ 
		return fullName;
	}
	// Почему const? Данные на которые указывает возвращаемый указатель, не могут быть изменены через этот указатель
	//т.е строка group будет доступна только для чтения
	const char* getDateOfBirth(){
		return dateOfBirth;
	}
	const char* getPhoneNumber(){
		return phoneNumber;
	}
	const char* getInstitution(){
		return institution;
	}
	const char* getGroup(){
		return group;
	}

	void setFullName(const char* _fullName) {
		delete[] fullName;
		fullName = new char[strlen(_fullName) + 1];
		strcpy_s(fullName, strlen(_fullName) + 1, _fullName);
	}
	//Почему const? Потому что данные на которые указывает указатель _fullName, не будут изменяться внутри метода

	void setDateOfBirth(const char* _dateOfBirth) {
		delete[] dateOfBirth;
		dateOfBirth = new char[strlen(_dateOfBirth) + 1];
		strcpy_s(dateOfBirth, strlen(_dateOfBirth) + 1, _dateOfBirth);
	}

	void setPhoneNumber(const char* _phoneNumber) {
		delete[] phoneNumber;
		phoneNumber = new char[strlen(_phoneNumber) + 1];
		strcpy_s(phoneNumber, strlen(_phoneNumber) + 1, _phoneNumber);
	}

	void setInstitution(const char* _institution) {
		delete[] institution;
		institution = new char[strlen(_institution) + 1];
		strcpy_s(institution, strlen(_institution) + 1, _institution);
	}

	void setGroup(const char* _group) {
		delete[] group;
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

	void Show() {
		cout << fullName << dateOfBirth << phoneNumber << institution << group;
	}

		
};

int main() {

}