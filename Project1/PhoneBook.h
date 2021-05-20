#pragma once
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <conio.h>

using namespace std;


class PhoneBook
{

private:

	char *FIO = new char[2];
	int HomeTel;
	int WorkTel;
	int MobileTel;
	char *DopInfo = new char[2];

public:
	PhoneBook(const char *f, int h, int w, int m, const char *d);
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