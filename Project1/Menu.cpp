#include"PhoneBook.h"


/*******************************************
 * Menu using the arrow keys from keyboard *
 *      By: Osama Farah . Amman-Jordan     *
 *         osama_f2005@hotmail.com         *
 *******************************************/


PhoneBook* p = new PhoneBook[3]
{
	{"FF", 512, 98, 93, "1 f"},
	{"A A A", 512, 98, 93, "2 A"},
	{"D D D D ", 512, 98, 93, "3 D"}
};


 //-----------------------------------------------------------------------------------------------
string* MenuItems() // this function returns a pointer to a string.
{
	string* item = new string[5];
	item[0] = "1. Сложение дробей";
	item[1] = "2. Вычетание дробей";
	item[2] = "3. Умножение дробей";
	item[3] = "4. Деление дробей";
	item[4] = "5. Выход из программы";

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
	system("cls"); //clear the screen.	

	gotoxy(25, 10);
	cout << "1";

	p[0].ShowPhoneBook();

	_getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void MenuFun2()
{
	system("cls"); //clear the screen.	

	gotoxy(25, 10);
	cout << "2";

	_getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void MenuFun3()
{
	system("cls"); //clear the screen.	

	gotoxy(25, 10);
	cout << "3";

	_getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void MenuFun4()
{
	system("cls"); //clear the screen.	

	gotoxy(25, 10);
	cout << "4";

	_getch();
	system("cls");
}
//-----------------------------------------------------------------------------------------------
void ExitOption()
{
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
