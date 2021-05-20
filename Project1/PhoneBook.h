#pragma once
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <conio.h>

using namespace std;


class PhoneBook
{

private:

	char *FIO[80];
	int HomeTel;
	int WorkTel;
	int MobileTel;
	char *DopInfo[80];

public:
	PhoneBook(char *f, int h, int w, int m, char *d);
	//PhoneBook();

	void ShowPhoneBook();
	~PhoneBook();



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