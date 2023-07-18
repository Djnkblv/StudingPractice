#include <iostream>

using namespace std;

int zadachki()
{
	setlocale(LC_ALL, "ru");
	
	cout << "Задачки работают?!" << endl;

//Составить программу, которая будет считывать введённое пятизначное число. После чего, 
//каждую цифру этого числа необходимо вывести в новой строке.
/*

	int value;

	cout << "Введите пятизначное число: ";
	cin >> value;

	if (value < 10000 || value > 99999)
	{
		cout << "Вы ввели некорректное число, запустите программу заново" << endl;
	}
	else
	{
		cout << "1 цифра числа: " << (value / 10000) << endl;
		cout << "2 цифра числа: " << (value / 1000) % 10 << endl;
		cout << "3 цифра числа: " << (value / 100) % 10 << endl;
		cout << "4 цифра числа: " << (value / 10) % 10 << endl;
		cout << "5 цифра числа: " << value % 10 << endl;
	}
*/


//Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b)
//Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс,
//таким образом, чтобы было понятно, в каком порядке должны вводиться числа.
/*
//Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b)
//Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс,
//таким образом, чтобы было понятно, в каком порядке должны вводиться числа.

	int x, a, b, f;

	cout << "Введите значения a, b, f: " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "f = ";
	cin >> f;

	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "x = " << x << endl;
*/


//Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,
//переводит её в верхний регистр и результат выводит в консоль.
/*

	char symb;
	cout << "Введите букву, который нужно перевести в нижний регистр: ";
	cin >> symb;
	symb = toupper(symb);		//функция toupper(), переводит символ в верхний регистр

	cout << symb << endl;
*/


//Программа должна переводить число, введенное с клавиатуры в метрах, в километры.
/*

	float meters, kilometers;

	cout << "Введите количество метров: ";
	cin >> meters;
	kilometers = (meters / 1000);
	cout << meters << " метров будет " << kilometers << " километров" << endl;
*/


//Объявить двумерный массив и заполнить его построчно с клавиатуры. 
//После заполнения – показать заполненную матрицу на экран и 
//посчитать сумму элементов отдельно в каждом столбце и каждой строке.
/*
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS];
	int sumRows = 0;
	int sumCols = 0;

	cout << "Заполните массив: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "Матрица: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
			sumRows += arr[i][j];
		}
		cout <<"Сумма строки = " << sumRows << endl;
		sumRows = 0;
	}

	for (int i = 0; i < COLS; i++)
	{
		cout << "=\t";
	}
	cout << endl;

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			sumCols += arr[j][i];
		}
		cout << sumCols << "\t";
		sumCols = 0;
	}
*/


//Заполнить двумерный массив случайными  числами от 10  до 100. 
//Посчитать сумму элементов отдельно в каждой строке и определить номер строки,  в которой эта сумма максимальна.
/*
	const int MATRIXSIZE = 5;
	int sumRows = 0;
	int maxSum = 0;
	int arr[MATRIXSIZE][MATRIXSIZE];

	cout << "Матрица с случайными значениями: " << endl;

	for (int i = 0; i < MATRIXSIZE; i++)
	{
		for (int j = 0; j < MATRIXSIZE; j++)
		{
			arr[i][j] = 10 + rand() % 91;
			cout << arr[i][j] << "\t";
			sumRows += arr[i][j];
		}
		cout << "Сумма строки = " << sumRows << endl;

		if (maxSum < sumRows)
		{
			maxSum = sumRows;
		}

		sumRows = 0;
	}

	cout <<"\nМаксимальная сумма строки = " << maxSum << endl;
*/


//Объявить два целочисленных массива  с разными размерами и написать функцию, 
//которая заполняет их элементы значениями и показывает на экран. 
//Функция должна принимать два параметра – массив и его размер.
/*
void ScanArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
}

void PrintArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

//int main()
{
	const int SIZE1 = 5;
	const int SIZE2 = 10;
	int arr1[SIZE1], arr2[SIZE2];

	cout << "Введите элементы массива 1: " << endl;
	ScanArray(arr1, SIZE1);
	cout << "Введите элементы массива 2: " << endl;
	ScanArray(arr2, SIZE2);
	cout << "\nМассив 1: " << endl;
	PrintArray(arr1, SIZE1);
	cout << "\nМассив 2: " << endl;
	PrintArray(arr2, SIZE2);
}
*/


//Необходимо создать двумерный массив 5 х 5. 
//Далее написать функцию, которая заполнит его случайными числами от  30 до 60. 
//Создать еще две функции, которые находят максимальный и минимальный элементы этого двумерного массива.
/*
const int SIZE = 5;


void FillArray(int arr[][SIZE], const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			arr[i][j] = 30 + rand() % 31;
		}
	}
}

void PrintArray(int arr[][SIZE], const int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

int FindMinValue(int arr[][SIZE], const int size)
{
	int min = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
			}
		}
	}
	return min;
}

int FindMaxValue(int arr[][SIZE], const int size)
{
	int max = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}

//int main()
{

	int arr[SIZE][SIZE];

	FillArray(arr, SIZE);
	cout << "Матрица 5х5 со случайными значениями: " << endl;
	PrintArray(arr, SIZE);
	cout << "\nМинимальный элемент в матрице = " << FindMinValue(arr, SIZE) << endl;
	cout << "Максимальный элемент в матрице = " << FindMaxValue(arr, SIZE) << endl;
}
*/



	return 0;

}