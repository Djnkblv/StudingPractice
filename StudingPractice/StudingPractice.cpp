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
=====================================================================================
Удаление и добавление элементов в динамического массива:

 - Для добавления или удаления элементов массива, создается новый массив,
который копирует данные из старого и добавляет новые, либо удаляет;
(см. в практике)





*/

//Строки:

/*





*/

					//ФУНКЦИИ:

void FillArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter " << i + 1 << " row" << endl;

		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void ShowArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void MultMatrix(int** arr1, int** arr2, int** arr3, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < cols;k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}

		
	}
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

	//Строки:

	//Создать двумерный массив 5х5, заполнить его случайными числами от 10 до 99 и вывести на экран.
	//Поменять местами максимальный элемент каждой строки с первым элементом в соответствующей строке.
	//Задачу решить с помощью указателей.

	/* 
					//ФУНКЦИИ:
void FillArray(int** arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = 10 + rand() % 90;
		}
	}
}

void ShowArray(int** arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}


void Swap(int** arr, const int size)
{
	int max = 0;
	int jm;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
				jm = j;
			}
		}
		arr[i][jm] = arr[i][0];
		arr[i][0] = max;
		max = 0;
	}
}

int main()
{
	int size = 5;

	int** matrix = new int* [size];

	for (int i = 0; i < size; i++)
	{
		matrix[i] = new int[size];
	}

	FillArray(matrix, size);
	ShowArray(matrix, size);

	cout << "Функция поменяла местами первый элемент и элемент с максимальным значением" << endl;

	Swap(matrix, size);
	ShowArray(matrix, size);


	for (int i = 0; i < size; i++)
	{
		delete[]matrix[i];
	}
	
	delete[]matrix;

}



*/

	//Задача на умножение матриц.Пользователь произвольно задает размерность двух матриц и заполняет значениями вручную.
	//Не забывайте, что необходимо выделить соответствующие участки памяти для матриц, 
	//которые будет заполнять пользователь и для третьей итоговой матрицы.Далее отобразите на экране 
	//обе заполненные матрицы и итоговую матрицу(их воспроизведение).

	/*
					//ФУНКЦИИ:

void FillArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		cout << "Enter " << i + 1 << " row" << endl;

		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void ShowArray(int** arr, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

void MultMatrix(int** arr1, int** arr2, int** arr3, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			for (int k = 0; k < cols;k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}


	}
}


int main()
{


	int cols, rows;
	cout << "Enter size rows of matrix: ";
	cin >> rows;
	cout << "Enter size cols of matrix: ";
	cin >> cols;

	int** matrix1 = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		matrix1[i] = new int [cols];
	}

	int** matrix2 = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		matrix2[i] = new int[cols];
	}

	int** matrix3 = new int* [rows];

	for (int i = 0; i < rows; i++)
	{
		matrix3[i] = new int[cols];
	}


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			matrix3[i][j] = 0;
		}
	}


	cout << "Enter value of Matrix 1: " << endl;
	FillArray(matrix1, rows, cols);
	cout << "Matrix 1:" << endl;
	ShowArray(matrix1, rows, cols);

	cout << "Enter value of Matrix 2: " << endl;
	FillArray(matrix2, rows, cols);
	cout << "Matrix 2:" << endl;
	ShowArray(matrix2, rows, cols);

	MultMatrix(matrix1, matrix2, matrix3, rows, cols);
	cout << "MultiMatrix: " << endl;
	ShowArray(matrix3, rows, cols);



	for (int i = 0; i < rows; i++)
	{
		delete[]matrix1[i];
	}

	delete[]matrix1;

	for (int i = 0; i < rows; i++)
	{
		delete[]matrix2[i];
	}

	delete[]matrix2;

	for (int i = 0; i < rows; i++)
	{
		delete[]matrix3[i];
	}

	delete[]matrix3;
}
*/

	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
}
