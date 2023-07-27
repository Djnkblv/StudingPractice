#include <iostream>		//директива include подключает библиотеку iostream
#include <ctime>		//Подключаем библиотеку с помощью которой можно вызывать функцию time

using namespace std;	//пространство имен, для сокращения кода



//Работа с динамической памятью:

/*
Операторы выделения памяти new и delete:

int* pa = new int;
delete pa;

- Оператор new выделяет место в опаративной памяти;
- ключевое слово delete позволяет удалить выделянную память;
==================================================================================
NULL и nullptr:

- NULL = 0;


*/



int main()
{
	setlocale(LC_ALL, "Rus");

	int* pa = new int;
	*pa = 10;
	cout << *pa << endl;
	delete pa;

	pa = nullptr;
	cout << pa << endl;



	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
}
