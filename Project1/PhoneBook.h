#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <conio.h>


using namespace std;


class PhoneBook
{

private:

	char *FIO;
	char* MobPhone;

public:
	
	PhoneBook();
	PhoneBook(const char *_fio, const char* _mobphone);
	
	//конструктор копирования
	PhoneBook(const PhoneBook& obj);

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