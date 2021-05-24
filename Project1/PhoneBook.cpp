#include "PhoneBook.h"


PhoneBook::PhoneBook()
{
	number = 0;
	*FIO = '-';
	*MobPhone = '-';
}


PhoneBook::PhoneBook(int _number, const char* _fio, const char* _mobphone)
{
	int count_fio, count_mobphone;
	count_fio = strlen(_fio);
	count_mobphone = strlen(_mobphone);	
	
	FIO = new char[count_fio + 1];
	MobPhone = new char[count_fio + 1];

	number = _number;
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

	number = obj.number;
	strcpy(FIO, obj.FIO);
	strcpy(MobPhone, obj.MobPhone);	
}


void PhoneBook::SearchAbon(PhoneBook* p, char const* charsearch, int const countabon)
{
	int countsearch = 0;

	for (size_t i = 0; i < countabon; i++)
	{
		char* temp = strstr(p[i].FIO, charsearch);
		if (temp)
		{
			countsearch++;

		    if (countsearch == 1)
			{
				cout << "П/№" << " | " << "Абонент" << endl;
			}

			cout << p[i].number << ". " << p[i].FIO << ". " << p[i].MobPhone << endl;
		}
	}

	if (countsearch < 1)
	{
		cout << "Абонентов не найдено" << endl;
		cout << "Нажми любую кнопку для возврата к меню.";		
	}
}

void PhoneBook::ShowPhoneBook()
{
	cout << number << ". ";
	
	cout << "ФИО: " << FIO;

	cout << endl;
	cout << "Тел: " << MobPhone;
	cout << endl;
	
}
