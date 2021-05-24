#include"PhoneBook.h"



/*******************************************
 * Menu using the arrow keys from keyboard *
 *      By: Osama Farah . Amman-Jordan     *
 *         osama_f2005@hotmail.com         *
 *******************************************/

//PhoneBook p;

//счетчки количества абонентов в кгине
int countabon = 3;

//порядковый номер абонент в кгине
int number = 1;

//Первоначальное заполнение абонентской книги
PhoneBook* p = new PhoneBook[countabon]
{
	{number++, "Зеленский Петр Алексеевич", "+38(093)333333333"},
	{number++, "Путин Владимир Александрович", "38097 777-333-333"},
	{number++, "Порошенко Владимир Владимирович", "666"}
};



 //-----------------------------------------------------------------------------------------------
string* MenuItems() // this function returns a pointer to a string.
{
	string* item = new string[5];
	item[0] = "Телефонная книга";
	item[1] = "Добавление абонента";
	item[2] = "Удаление абонента";
	item[3] = "Поиск абонента";
	item[4] = "Выход из программы";

	return item;
}
//-----------------------------------------------------------------------------------------------
void gotoxy(int xpos, int ypos)  // just take this function as it is.
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = xpos; scrn.Y = ypos;
	SetConsoleCursorPosition(hOuput, scrn);
}
//-----------------------------------------------------------------------------------------------
void MenuFun1()
{
	system("cls"); 

	//gotoxy(25, 10);

	cout << "Телефонная книга" << endl;

	for (size_t i = 0; i < countabon; i++)
	{
		p[i].ShowPhoneBook();
	}	
	
	_getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void MenuFun2()
{
	system("cls"); 

	p->AddAbon(p, &countabon, &number);

	_getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void MenuFun3()
{
	system("cls"); 

	gotoxy(25, 10);
	cout << "3";

	_getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void MenuFun4()
{
	system("cls"); 

	char charsearch[30] = "";

	cout << "Поиск учитывает регистр, если не нашли \"петров\" попробуйте ввести \"Петров\" или \"етр\")" << endl << endl;

	cout << "Введите Фамилию, имя или отчество абонента: ";
	cin.getline(charsearch, 30);

	p->SearchAbon(p, charsearch, countabon);
	
	_getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void ExitOption()
{
	delete[]p;
	gotoxy(30, 15);
	cout << "Exitting..." << endl;
	_getch();
	exit(0);
}
//-----------------------------------------------------------------------------------------------
void ChangeCursorStatus(bool Visible)
{
	CONSOLE_CURSOR_INFO* c = new CONSOLE_CURSOR_INFO;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

	if (Visible)
	{
		c->bVisible = TRUE;
		c->dwSize = 0;
	}
	else
	{
		c->bVisible = FALSE;
		c->dwSize = 1;
	}

	SetConsoleCursorInfo(h, c);
}
//-----------------------------------------------------------------------------------------------
