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

- В отличии от статического массива, динаический можно менять во время работы программы;

int *arr = new int[]

delete []arr;		//Удаляем данные в памяти;
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


	//Дан двумерный массив размером n×m(n и m не превосходят 1000).Симметричный ему относительно 
	//главной диагонали массив называется транспонированным к данному.Он имеет размеры m×n : 
	//строки исходного массива становятся столбцами транспонированного, 
	//столбцы исходного массива становятся строками транспонированного.
	//Для данного массива постройте транспонированный массив и выведите его на экран

	int rows, cols;
	cout << "enter rows: ";
	cin >> rows;
	cout << "enter cols: ";
	cin >> cols;
	if (rows > 1000 || cols > 1000)
	{
		cout << "incorrect value rows or cols" << endl;
		return 0;
	}

	int** arr = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	cout << "Matrix: " << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	/////////////////////////////////////////
	//создаем второй массив
	int s = rows;
	rows = cols;
	cols = s;

	cout << "trans Matrix: " << endl;

	int** arrTrans = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		arrTrans[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arrTrans[i][j] = arr[j][i];
			cout << arrTrans[i][j] << "\t";
		}
		cout << endl;
	}



	//////////////////////////////////////
	//Удаление массивов
	for (int i = 0; i < cols; i++)
	{
		delete[]arr[i];
	}

	delete[]arr;

	for (int i = 0; i < rows; i++)
	{
		delete[]arrTrans[i];
	}

	delete[]arrTrans;




	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
}
