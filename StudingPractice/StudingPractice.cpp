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


	//Объявите указатель на массив типа double и предложите пользователю выбрать его размер.
	//Далее напишите четыре функции : 
	//первая должна выделить память для массива, вторая  – заполнить ячейки данными, 
	//третья – показать данные на экран, четвертая – освободить занимаемую память.
	//Программа должна предлагать пользователю продолжать работу(создавать новые динамические массивы) или выйти из программы.

	/*
	
double* ArrIn(double* PtrArr, int size)
{
	PtrArr = new double[size];
	return PtrArr;
}

void ArrValue(double* PtrArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		PtrArr[i] = rand() % 30 * 0.2;
	}
}

void ArrPrint(double* PtrArr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << PtrArr[i] << "\t";
	}
	cout << endl;
}

double* ArrDelete(double* PtrArr)
{
	delete[]PtrArr;
	PtrArr = 0;

	return PtrArr;
}


	int main() 
	{
	
	double* pArr = 0;
	int userAnswer = 0;


	do
	{
		int size;
		cout << "enter array size: ";
		cin >> size;

		pArr = ArrIn(pArr, size);

		ArrValue(pArr, size);

		cout << "array: ";

		ArrPrint(pArr, size);

		pArr = ArrDelete(pArr);

		cout << "Repeat?\t1 - yes \t0 - no ";
		cin >> userAnswer;
	} while (userAnswer != 0);
	
	return 0;
	}
	*/

	

	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
}
