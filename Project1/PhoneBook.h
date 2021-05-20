#pragma once
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <conio.h>

using namespace std;


class PhoneBook
{

private:

	char *FIO;

public:
	
	PhoneBook();
	PhoneBook(const char *f);
	
	~PhoneBook();

	void ShowPhoneBook();

};



//-----------------------------------------------------------------------------------------------

void gotoxy(int, int);

void ChangeCursorStatus(bool);
void MenuFun1();
void MenuFun2();
void MenuFun3();
void MenuFun4();

void ExitOption();
//-----------------------------------------------------------------------------------------------