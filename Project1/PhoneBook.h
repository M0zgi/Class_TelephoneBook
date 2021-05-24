#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <Windows.h>
#include <string.h>
#include <conio.h>
#include <iomanip>


using namespace std;


class PhoneBook
{

private:

	int number;
	char* FIO;
	char* MobPhone;

public:
	
	PhoneBook();
	PhoneBook(int _number, const char *_fio, const char* _mobphone);
	
	//конструктор копирования
	PhoneBook(const PhoneBook& obj);

	//поиск абонента
	void SearchAbon(PhoneBook* p, char const* charsearch, int const countabon);

	//добавление абонента

	void AddAbon(PhoneBook*& p, int* countabon, int* _number);

	//удаление абонента

	//деструктор
	~PhoneBook();

	//печать книги абонентов
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