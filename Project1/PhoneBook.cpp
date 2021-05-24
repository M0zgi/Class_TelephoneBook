#include "PhoneBook.h"


PhoneBook::PhoneBook()
{
	number = 0;
	FIO = new char[3]{"No"};
	MobPhone = new char[3]{ "No" };
}


PhoneBook::PhoneBook(int _number, const char* _fio, const char* _mobphone)
{
	int count_fio, count_mobphone;
	count_fio = strlen(_fio);
	count_mobphone = strlen(_mobphone);	
	
	FIO = new char[count_fio + 1];
	MobPhone = new char[count_mobphone + 1];

	number = _number;
	strcpy(FIO, _fio);
	strcpy(MobPhone, _mobphone);
}


PhoneBook::~PhoneBook()
{
	delete []FIO;
	delete []MobPhone;
}

void PhoneBook::AddAbon(PhoneBook* &p, int* countabon, int* _number)
{
	PhoneBook *temp = new PhoneBook [*countabon + 1];

	char _fio, _mobphone;

	int numbertmp = *_number;

	for (size_t i = 0; i < *countabon; i++)
	{
		temp[i].number = p[i].number;

		_fio = strlen(p[i].FIO);
		_mobphone = strlen(p[i].MobPhone);
		
		temp[i].FIO = new char[_fio + 1];
		temp[i].MobPhone = new char[_mobphone + 1];

		strcpy(temp[i].FIO, p[i].FIO);
		strcpy(temp[i].MobPhone, p[i].MobPhone);		
	}	


	temp[*countabon].number = numbertmp;	

	char buff[80];

	cout << "Введите ФИО: ";
	cin.getline(buff, 80);
	_fio = strlen(buff);
	temp[*countabon].FIO = new char[_fio + 1];
    strcpy (temp[*countabon].FIO, buff);

	cout << endl;

	cout << "Введите мобильный номер телефона: ";

	cin.getline(buff, 80);
	_mobphone = strlen(buff);
	temp[*countabon].MobPhone = new char[_mobphone + 1];
	strcpy(temp[*countabon].MobPhone, buff);
	
	(*countabon)++;
	(*_number)++;
		
	delete[]p;

	p = temp;

	cout << "Изменения внесены...\n";
	cout << "Нажми любую кнопку для возврата к меню.";
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
