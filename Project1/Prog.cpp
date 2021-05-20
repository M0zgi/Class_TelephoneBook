/*Создайте приложение «Телефонная книга». Необходимо хранить данные об абоненте
(ФИО, домашний телефон, рабочий телефон, мобильный телефон, дополнительная информация о контакте) 
внутри соответствующего класса.

Наполните класс переменными - членами, функциями членами, конструкторами, inline - функциями - членами,
используйте инициализаторы, реализуйте деструктор.
Обязательно необходимо выделять динамически память под ФИО.
Предоставьте пользователю возможность добавлять новых абонентов, удалять абонентов, 
искать абонентов по ФИО, показывать всех абонентов.*/


#include"PhoneBook.h"


int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);




	string* MenuItems();

	ChangeCursorStatus(false);
	typedef void (*TMenuOption)();

	int ItemCount = 5;
	int MenuChoice = 1;
	char key;

	TMenuOption* MenuOption = new TMenuOption[ItemCount];
	MenuOption[0] = MenuFun1;
	MenuOption[1] = MenuFun2;
	MenuOption[2] = MenuFun3;
	MenuOption[3] = MenuFun4;
	MenuOption[4] = ExitOption;

	while (1)
	{
		for (int i = 0; i < ItemCount; i++)
		{
			gotoxy(25, 7 + i);
			MenuChoice == i + 1 ? cout << " -> " : cout << "    ";


			cout << MenuItems()[i] << endl;
		}

		key = _getch();

		switch (key)
		{
		case '\r':
			try
			{
				(*MenuOption[MenuChoice - 1])();

			}
			catch (...)
			{
			}


			break;

		case 'P':
			MenuChoice++;
			if (MenuChoice > ItemCount)
				MenuChoice = 1;
			break;

		case 'H':
			MenuChoice--;
			if (MenuChoice < 1)
				MenuChoice = ItemCount;
			break;

		case 27:
			try { (*MenuOption[ItemCount - 1])(); }


			catch (...) {}
			break;
		default:
			if (key >= '1' && key <= char(ItemCount + '0'))

			{
				try { (*MenuOption[int(key) - '0' - 1])(); }

				catch (...) {}
			}
		}
	}

	delete[] MenuOption;
	return 0;




	system("pause");


}