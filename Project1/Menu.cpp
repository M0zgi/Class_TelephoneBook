#include"PhoneBook.h"



/*******************************************
 * Menu using the arrow keys from keyboard *
 *      By: Osama Farah . Amman-Jordan     *
 *         osama_f2005@hotmail.com         *
 *******************************************/

//PhoneBook p;





 //-----------------------------------------------------------------------------------------------
string* MenuItems() // this function returns a pointer to a string.
{
	string* item = new string[5];
	item[0] = "���������� �����";
	item[1] = "���������� ������������";
	item[2] = "�������� ������������";
	item[3] = "����� � �������������� ������������";
	item[4] = "����� �� ���������";

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

	//gotoxy(25, 10);

	PhoneBook* p = new PhoneBook[3]
	{
		{"��������� ���� ����������", "+38(093)333333333"},
		{"����� �������� �������������", "38097 777-333-333"},
		{"��������� �������� ������������", "666"}
	};

	cout << "���������� �����" << endl;

	for (size_t i = 0; i < 3; i++)
	{
		p[i].ShowPhoneBook();
	}
	
	
	delete[]p;
	
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
