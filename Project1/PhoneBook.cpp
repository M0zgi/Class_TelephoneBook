#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	*FIO = 'Z';
	*MobPhone = '9';
}


PhoneBook::PhoneBook(const char* _fio, const char* _mobphone)
{
	int count_fio, count_mobphone;
	count_fio = strlen(_fio);
	count_mobphone = strlen(_mobphone);	
	
	FIO = new char[count_fio + 1];
	MobPhone = new char[count_fio + 1];

	strcpy(FIO, _fio);
	strcpy(MobPhone, _mobphone);
}


PhoneBook::~PhoneBook()
{
	delete []FIO;
	delete []MobPhone;
	//cout << "DIS" << endl;
}

void PhoneBook::ShowPhoneBook()
{
	cout << "ÔÈÎ: " << FIO;
	

	cout << endl;
	cout << "Òåë: " << MobPhone;
	cout << endl;
	
}
