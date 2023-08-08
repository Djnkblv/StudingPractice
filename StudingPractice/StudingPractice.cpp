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

*/

void FillArray(int* const arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
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


	
	
	*/
	
	int size = 10;

	int* firstArray = new int[size];
	int* secondArray = new int[size];




	FillArray(firstArray, size);
	FillArray(secondArray, size);

	cout << "firstArray:\t";
	ShowArray(firstArray, size);
	cout << "secondArray:\t";
	ShowArray(secondArray, size);

	delete[]firstArray;

	firstArray = new int[size];
	for (int i = 0; i < size; i++)
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
