#include "PhoneBook.h"


PhoneBook::PhoneBook()
{
	*FIO = '-';
	*MobPhone = '-';
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

PhoneBook::PhoneBook(const PhoneBook& obj)
{
	int count_fio, count_mobphone;
	count_fio = strlen(obj.FIO);
	count_mobphone = strlen(obj.MobPhone);

	FIO = new char[count_fio + 1];
	MobPhone = new char[count_fio + 1];

	strcpy(FIO, obj.FIO);
	strcpy(MobPhone, obj.MobPhone);	
}

void PhoneBook::ShowPhoneBook()
{
	cout << "ФИО: " << FIO;
	

	cout << endl;
	cout << "Тел: " << MobPhone;
	cout << endl;
	
}
