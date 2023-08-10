﻿#include <iostream>		//директива include подключает библиотеку iostream
#include <ctime>		//Подключаем библиотеку с помощью которой можно вызывать функцию time

using namespace std;	//пространство имен, для сокращения кода



//Работа с динамической памятью:

/*
Операторы выделения памяти new и delete:

int* pa = new int;
delete pa;

- Оператор new выделяет место в опаративной памяти;
- ключевое слово delete позволяет удалить выделянную память;
- Если написали new, нужно обязательно писать delete, чтобы не было утечки данных;

==================================================================================
NULL и nullptr:

- NULL = 0;
- nulptr позволяет удалить данные из указателя, вне зависимости от типа данных, лучше чем просто 0;
==================================================================================
Динамический массив:

- В отличии от статического массива, динамический можно менять во время работы программы;

int *arr = new int[10]	//операция взятия адреса ( & ) к массивам не применяется

delete []arr;		//Удаляем данные в памяти;

Расшифровка
- new (выдели память) int (для хранения целых чисел) [10] (в количестве 10).
===================================================================================
Двумерный динамический массив:

int **arr = new int* [rows];

- Для двумерного массива, нужно **, что означает указатель на другой указатель;
=====================================================================================
Удаление и добавление элементов в динамического массива:

 - Для добавления или удаления элементов массива, создается новый массив,
который копирует данные из старого и добавляет новые, либо удаляет;
(см. в практике)





*/

//Строки. Строковые массивы:

/*
 - Тип данных char может хранить только одно значение, (один символ);

	char symbol = 'q'

- Но, если объявить переменную как массив, char может принимать множество символов;
- строка является массивом из символов char;

	char string[] = "abcdef";	//Символ обозначается одинарными кавычками '', а строка двойными "" ;

- последний элемент строкового массива, должен хранить в себе значение \0 (Нулл терминатор), что означает конец строки;

	char string [] = {'H','E','L','L','O',\0};

- Функция strlen показывает сколько символов в строке;

	cout << strlen(string) << endl;		//Вывод количества символов в переменной string;
 ===========================================================================================
 Строки и указатели:

	const char* string = "Hello!";

 - Со строками можно обращаться так же как и с динамическим массивом, если объявить указатель, то можно не обозначать
 строку как массив;

 - Функция strlen(), передает количество символов в строке:
	
	cout << strlen(str) << endl;


*/

//Преобразование типов в стиле С:

/*
- Для преобразования типа данных переменной в другой тип данных, перед названием переменной в скобках пишем новый тип данных;

	double a = 33.3;
	cout << (int)a << endl;		//из double преобразовали в int;

	a = (char)a;	//Преобразовали переменную а из int в char;

*/






					//ФУНКЦИИ:
int StrLen(char* str)
{
	for (int i = 0; i!='\0'; i++)
	{

	}
}

void foo(const char* str)
{
	cout << strlen(str) << endl;
}


int main()
{

	setlocale(LC_ALL, "Rus");

	//Динамический массив:
	/*
	int size ;
	cout << "enter array size: ";
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t";
		cout << arr + i << endl;
	}

	delete[] arr;

	*/

	//Динамический двумерный массив:
	/*
	//Объявление двумерного массива:
	int rows, cols;
	cout << "enter rows count:";
	cin >> rows;
	cout << "enter cols count: ";
	cin >> cols;

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	////////////////////////////////////////////////////////
	
	//Заполнение массива:
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}
	//////////////////////////////////////////////////////

	//Вывод массива:
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	////////////////////////////////////////////////////////
	for (int i = 0; i < rows; i++)		//цикл удаления массива из массива указателя (обязательная процедура);
	{
		delete[] arr[i];
	}
	
	delete[] arr;
	*/


	//Копирование динамического массива:

	/*
	- Для того, чтобы скопировать один массив в другой,
	необходимо сначала удалить старые данные из массива 1
	и выделить в ней новую память, после этого циклом пробежаться по массиву 2
	и скопировать из нее данные в массив 1;

	//ФУНКЦИИ:
	
	void FillArray(int* const arr, const int size)	//Функция заполнения случайными числами
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}


void ShowArray(int* const arr, const int size)		//Функция вывода массива в консоль
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

int main()
{

int size = 10;

	int* firstArray = new int[size];
	int* secondArray = new int[size];




	FillArray(firstArray, size);
	FillArray(secondArray, size);

	cout << "firstArray:\t";
	ShowArray(firstArray, size);
	cout << "secondArray:\t";
	ShowArray(secondArray, size);

	delete[]firstArray;		//Удаляем данные из массива

	firstArray = new int[size];	//выделяем новую память
	for (int i = 0; i < size; i++)		//и копируем значения второго массива
	{
		firstArray[i] = secondArray[i];
	}

	cout << "====================================\nКопирование массива произошло" << endl;

	cout << "firstArray:\t";
	ShowArray(firstArray, size);
	cout << "secondArray:\t";
	ShowArray(secondArray, size);




	delete[]firstArray;
	delete[]secondArray;

	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
}
	
	*/
	
	//Добавление и удаление нового элемента в массиве:

	/*
							ФУНКЦИИ:

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 10 + rand() % 41;
	}
}

void ShowArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}


//Функция, добавляющая последний элемент в массиве;
void push_back(int*& arr, int& size, const int value)
//*&arr -  (указатель на ссылку) дает возможность подменить адрес указатаеля
{
	int* newArray = new int[size + 1];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}

	newArray[size] = value;

	size++;					//Увеличиваем переменную, так как он указан как ссылка, чтобы выводить новый массив;

	delete[]arr;

	arr = newArray;			//подменяем адрес на который указывает указатель;
}



//Функция, которая удаляет последний элемент из массива:
void pop_back(int*& arr, int& size)
{
	size--;
	int* newArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		newArray[i] = arr[i];
	}

	delete[]arr;

	arr = newArray;

}

//Функция, добавляющая элемент в начало массива:
void push_start(int*& arr, int& size, const int value)
{
	int* newArray = new int[size + 1];
	for (int i = 1; i < size+1; i++)
	{
		newArray[i] = arr[i-1];
	}

	newArray[0] = value;

	size++;

	delete[]arr;

	arr = newArray;
}

//Функция, которая удаляет первый элемент массива:
void pop_start(int*& arr, int& size)
{
	size--;
	int* newArray = new int[size];
	for (int i = 1; i < size+1; i++)
	{
		newArray[i-1] = arr[i];
	}

	delete[]arr;

	arr = newArray;

}



int main()
{

	int size = 5;
	int* arr = new int[size];
	FillArray(arr, size);

	ShowArray(arr, size);

	cout << "=================================================" << endl;

	//увеличиваем массив:
	push_back(arr, size, 5002);

	ShowArray(arr, size);


	//уменьшаем массив:
	pop_back(arr, size);

	ShowArray(arr, size);

	cout << "================================================" << endl;

	//добавление и удаление элементов в начале:
	push_start(arr, size, 2005);

	ShowArray(arr, size);

	pop_start(arr, size);

	ShowArray(arr, size);

	delete[]arr;

}

	*/

	//Строки. Строковый массив:

	/*
	char symbol = 'a';
	cout << symbol << endl;

	char string[] = { 'H','E','L','L','O','\0'};
	cout << string << endl;
	cout << strlen(string) << endl;

	char string2[] = "Hello world!";
	cout << string2 << endl;
	cout << strlen(string2) << endl;
	*/

	//Преобразование типов в стиле С:

	/*
	int a = 33.5;
	
	double b = 444.6565;

	cout << a/b << endl;

	b = (int)b;
	a = (double)a;
	cout << a << "\n" << b << endl;
	*/

	//Таблица символов ASCII:
	
	/*
	cout << sizeof(char) << endl;

	//выводим в консоль кодировку, от 0 до 255 в типе char:
	for (int i = 0; i <= 255; i++)
	{
		cout << "code = " << i << "\t char = " << (char)i << endl;
	}
	*/

	//Строки и указатели. ДЗ:

	//Написать свою реализацию функции strlen (Считает количество символов в строке);

	




	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
}
