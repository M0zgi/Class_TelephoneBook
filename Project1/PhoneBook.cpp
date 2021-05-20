#include "PhoneBook.h"

PhoneBook::PhoneBook(const char *f, int h, int w, int m, const char *d)
{
	*FIO = *f;
	HomeTel = h;
	WorkTel = w;
	MobileTel = m;
	*DopInfo = *d;
}

//PhoneBook::PhoneBook()
//{
//}

void PhoneBook::ShowPhoneBook()
{
	cout << FIO << endl << HomeTel << endl << WorkTel << endl << MobileTel << endl << DopInfo;
}

PhoneBook::~PhoneBook()
{
}
