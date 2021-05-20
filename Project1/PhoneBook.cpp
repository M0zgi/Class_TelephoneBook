#include "PhoneBook.h"

inline PhoneBook::PhoneBook(char *f, int h, int w, int m, char *d)
{
	FIO[80] = f;
	HomeTel = h;
	WorkTel = w;
	MobileTel = m;
	DopInfo[80] = d;
}

//PhoneBook::PhoneBook()
//{
//}

void PhoneBook::ShowPhoneBook()
{
	cout << FIO << " " << HomeTel << " " << WorkTel << " " << MobileTel << " " << DopInfo;
}

PhoneBook::~PhoneBook()
{
}
