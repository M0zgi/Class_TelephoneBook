#include "PhoneBook.h"

PhoneBook::PhoneBook()
{
	*FIO = 'Z';
}


PhoneBook::PhoneBook(const char *f)
{
	FIO = new char[10];
	*FIO = *f;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::ShowPhoneBook()
{
	cout << "ÔÈÎ: " << FIO;
}
