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


//Программа должна нарисовать домик. Строительным материалом являются: 
//символы слэша (прямой /, обратный , вертикальный |), знак минуса, символ подчёркивания.
/*
	cout << "Домик: \n" << endl;
	cout << "\t\t    /\\" << endl;
	cout << "\t\t   /  \\" << endl;
	cout << "\t\t  /    \\" << endl;
	cout << "\t\t  |----|" << endl;
	cout << "\t\t\  |    |" << endl;
	cout << "\t\t\  | __ |" << endl;
	cout << "\t\t\  | +  |" << endl;
	cout << "\t\t\  | -- |" << endl;
	cout << "\t\t\  =======" << endl;
*/


//Составить программу, которая требует ввести два числа. 
//Если первое число больше второго, то программа печатает слово больше. 
//Если первое число меньше второго, то программа печатает слово меньше. 
//А если числа равны, программа напечатает сообщение Эти числа равны.

/*
int value1, value2;
cout << "Введите число 1: ";
cin >> value1;
cout << "Введите число 2: ";
cin >> value2;

if (value1 > value2)
{
	cout << "\nБОЛЬШЕ" << endl;
}
else if (value1 < value2) {
	cout << "\nМЕНЬШЕ" << endl;
}
else
{
	cout << "\nЧИСЛА РАВНЫ " << endl;
}
*/


//Составить алгоритм увеличения всех трех, введённых с клавиатуры, переменных на 5,
//если среди них есть хотя бы две равные. В противном случае выдать ответ «равных нет»

/*
int value1, value2, value3;
cout << "Введите число 1: ";
cin >> value1;
cout << "Введите число 2: ";
cin >> value2;
cout << "Введите число 3: ";
cin >> value3;

if (value1 == value2 || value1 == value3 || value2 == value3)
{
	cout << "\nЧисло 1 = " << value1 + 5 << "\nЧисло2 = " << value2 + 5 << "\nЧисло 3 = " << value3 + 5 << endl;
}
else {
	cout << "\nРавных чисел нет" << endl;
}
*/


//Организовать ввод двухзначного натурального числа с клавиатуры. 
//Программа должна определить наименьшую и наибольшую цифры, которые входят в состав данного натурального числа.

/*
int value, a, b;

cout << "Введите число не больше 99 и не меньше 10: ";
cin >> value;



a = (value / 10) % 10;
b = value % 10;

if (value > 99 || value < 10)
{
	cout << "Вы ввели некорректное число" << endl;
}
else if (a < b)
{
	cout << a << " - наименьшее число" << endl;
	cout << b << " - наибольшее число" << endl;
}
else if (a > b)
{
	cout << a << " - наибольшее число" << endl;
	cout << b << " - наименьшее число" << endl;
}
else if (a == b) {
	cout << "Числа равны" << endl;
}
*/


//Возвести, введенное с клавиатуры число, в степень n, степень тоже вводится с клавиатуры. 
//Возведение в степень организовать с использованием циклов.
/*
	int x, n, s;

	cout << "Введите число: ";
	cin >> x;
	cout << "Введите степень: ";
	cin >> n;

	s = 1;
	for (int i = 0; i < n; i++)
	{
		s *= x;
	}

	cout << "Число после возведения в степень = " << s << endl;
	*/




					//ФУНКЦИИ


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




				//ДВУМЕРНЫЕ МАССИВЫ
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


//Найдите индексы первого вхождения максимального элемента.
//Программа получает на вход размеры массива n и m, затем n строк по m чисел в каждой.n и m не превышают 100.
//Выведите два числа : номер строки и номер столбца, в которых стоит наибольший элемент в двумерном массиве.
//Если таких элементов несколько, то выводится тот, у которого меньше номер строки, а если номера строк равны 
//то тот, у которого меньше номер столбца.
/*
	int n, m, maxn, maxm;
	int maxValue = 0;
	cout << "Введите количество строк: ";
	cin >> n;
	if (n > 100) {
		cout << "Вы ввели некорректное значение" << endl;
		return 0;
	}
	cout << "Введите количество столбцов: ";
	cin >> m;
	if (m > 100) {
		cout << "Вы ввели некорректное значение" << endl;
		return 0;
	}

	int** arr = new int* [n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	///////////////////////////////////////
	//Заполнение и вывод массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 30;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	//////////////////////////////////////
	//Проверка наибольшего элемента и вывод строки и столбца в котором он лежит;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > maxValue) {
				maxValue = arr[i][j];
				maxn = i;
				maxm = j;
			}
	}

	cout << "\nМаксимальный элемент в массиве = " << maxValue << endl;
	cout << "Номер строки и столбца максимального элемента: " << maxn << ", " << maxm << endl;

	//////////////////////////////////////
	//Удаление массива:
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}

	delete[]arr;
*/


//Дано нечетное число n, не превосходящее 15. 
//Создайте двумерный массив из n×n элементов, заполнив его символами "." 
//(каждый элемент массива является строкой из одного символа).
//Затем заполните символами "*" среднюю строку массива, средний столбец массива, 
//главную диагональ и побочную диагональ.В результате "*" в массиве должны образовывать изображение звездочки.
//Выведите полученный массив на экран, разделяя элементы массива пробелами.
/*
	int n;
	cout << "Введите нечетное значение n не превышающее 15: ";
	cin >> n;
	if (n > 15 || n % 2 == 0) {
		cout << "Вы ввели некорректное значение n" << endl;
		return 0;
	}

	//Инициализация массива. Заполнение символами:
	char** arr = new char* [n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = new char[n];
	}


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = '.';
		}
	}

	/////////////////////////////////////////////////
	//Заполнение звездочками:
	//По центру горизонтально:
	for (int j = 0; j < n; j++)
	{
		arr[n/2][j] = '*';
	}

	//По центру вертикально:
	for (int i = 0; i < n; i++)
	{
		arr[i][n/2] = '*';
	}

	//По побочной диогонали:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n + 1;)
		{
			arr[i][n - j] = '*';
			break;
		}
	}

	//По основной диогонали:
	for (int i = 0; i < n; i++)
	{
		arr[i][i] = '*';
	}

	///////////////////////////////////////////////////
	//Вывод массива:
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}



	////////////////////////////////////////////////////
	//Удаление массива:
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;
*/


//Дан двумерный массив и два числа : i и j.Поменяйте в массиве столбцы с номерами i и j.
//Программа получает на вход размеры массива n и m, не превосходящие 100, затем элементы массива, 
//затем числа i и j.
/*
	int rows, cols;
	cout << "enter rows: ";
	cin >> rows;
	cout << "enter cols: ";
	cin >> cols;
	if (rows > 100 || cols > 100)
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
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	int m, n;
	cout << "enter m and n: ";
	cin >> m >> n;

	for (int i = 0; i < rows; i++)
	{
		int s = 0;
		s = arr[i][m];
		arr[i][m] = arr[i][n];
		arr[i][n] = s;
	}

	cout << "matrix with swap: " << endl;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}



	for (int i = 0; i < rows; i++)
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
/*
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
		*/


//Объявите указатель на массив типа int и выделите память для 12 - ти элементов.
//Необходимо написать функцию, которая поменяет значения четных и нечетных ячеек массива.
/*

			int* MakeArr(int* PtrArr, int size)
		{
			for (int i = 0; i < size; i++)
			{
				PtrArr = new int[size];
				return PtrArr;
			}
		}

		void InArr(int* PtrArr, int size)
		{
			for (int i = 0; i < size; i++)
			{
				PtrArr[i] = i;
			}
		}

		void PrintArr(int* PtrArr, int size)
		{
			for (int i = 0; i < size; i++)
			{
				cout << PtrArr[i] << "\t";
			}
		}

		void SwapArr(int* PtrArr, int size)
		{
			for (int i = 0; i < size-1; i+=2)
			{
				int value = PtrArr[i];
				PtrArr[i] = PtrArr[i + 1];
				PtrArr[i + 1] = value;
			}
		}

		int* DeleteArr(int* PtrArr)
		{
			delete[]PtrArr;
			PtrArr = 0;

			return PtrArr;
		}


		int main()
		{

			int* pArr = 0;

			pArr = MakeArr(pArr, 12);
			InArr (pArr, 12);
			cout << "Arr:" << endl;
			PrintArr(pArr, 12);

			cout << "\narray with swap: " << endl;
			SwapArr(pArr, 12);
			PrintArr(pArr, 12);

			pArr = DeleteArr(pArr);
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


//Объявить и заполнить двумерный динамический массив случайными числами от 10 до 50. 
//Показать его на экран.Для заполнения и показа на экран написать отдельные функции. 
//(подсказка: функции должны принимать три параметра – указатель на динамический массив, 
//количество строк, количество столбцов).Количество строк и столбцов выбирает пользователь.

/*
		ФУНКЦИИ:
		void FillArray(int** const arr, const int size)
		{
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{
					arr[i][j] = 10 + rand() % 41;
				}
			}
		}


		void ShowArray(int** const arr, const int size)
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
		=====================================================
		int main()
		{


			int size;

			cout << "Enter size of Matrix: ";
			cin >> size;

			int** matrix = new int* [size];
			for (int i = 0; i < size; i++)
			{
				matrix[i] = new int[size];
			}


			cout << "Matrix: " << endl;
			FillArray(matrix, size);
			ShowArray(matrix, size);


			for (int i = 0; i < size; i++)
			{
				delete[]matrix[i];
			}

			delete[]matrix;
			*/


					//УКАЗАТЕЛИ

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





	return 0;

}