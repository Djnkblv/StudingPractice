#include <iostream>

using namespace std;

int zadachki()
{
	setlocale(LC_ALL, "ru");
	
	cout << "������� ��������?!" << endl;

//��������� ���������, ������� ����� ��������� �������� ����������� �����. ����� ����, 
//������ ����� ����� ����� ���������� ������� � ����� ������.
/*

	int value;

	cout << "������� ����������� �����: ";
	cin >> value;

	if (value < 10000 || value > 99999)
	{
		cout << "�� ����� ������������ �����, ��������� ��������� ������" << endl;
	}
	else
	{
		cout << "1 ����� �����: " << (value / 10000) << endl;
		cout << "2 ����� �����: " << (value / 1000) % 10 << endl;
		cout << "3 ����� �����: " << (value / 100) % 10 << endl;
		cout << "4 ����� �����: " << (value / 10) % 10 << endl;
		cout << "5 ����� �����: " << value % 10 << endl;
	}
*/


//����������������� ��������� ���������: (� + b � f / �) + f * a * a � (a + b)
//����� �, b, f �������� � ����������. ������������ ���������������� ���������,
//����� �������, ����� ���� �������, � ����� ������� ������ ��������� �����.
/*
//����������������� ��������� ���������: (� + b � f / �) + f * a * a � (a + b)
//����� �, b, f �������� � ����������. ������������ ���������������� ���������,
//����� �������, ����� ���� �������, � ����� ������� ������ ��������� �����.

	int x, a, b, f;

	cout << "������� �������� a, b, f: " << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "f = ";
	cin >> f;

	x = (a + b - f / a) + f * a * a - (a + b);
	cout << "x = " << x << endl;
*/


//�������� ���������, ������� ��������� ������������ ������ � ������� ��������� ����� ������� ��������,
//��������� � � ������� ������� � ��������� ������� � �������.
/*

	char symb;
	cout << "������� �����, ������� ����� ��������� � ������ �������: ";
	cin >> symb;
	symb = toupper(symb);		//������� toupper(), ��������� ������ � ������� �������

	cout << symb << endl;
*/


//��������� ������ ���������� �����, ��������� � ���������� � ������, � ���������.
/*

	float meters, kilometers;

	cout << "������� ���������� ������: ";
	cin >> meters;
	kilometers = (meters / 1000);
	cout << meters << " ������ ����� " << kilometers << " ����������" << endl;
*/


//�������� ��������� ������ � ��������� ��� ��������� � ����������. 
//����� ���������� � �������� ����������� ������� �� ����� � 
//��������� ����� ��������� �������� � ������ ������� � ������ ������.
/*
	const int ROWS = 3;
	const int COLS = 4;
	int arr[ROWS][COLS];
	int sumRows = 0;
	int sumCols = 0;

	cout << "��������� ������: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << "�������: " << endl;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
			sumRows += arr[i][j];
		}
		cout <<"����� ������ = " << sumRows << endl;
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


//��������� ��������� ������ ����������  ������� �� 10  �� 100. 
//��������� ����� ��������� �������� � ������ ������ � ���������� ����� ������,  � ������� ��� ����� �����������.
/*
	const int MATRIXSIZE = 5;
	int sumRows = 0;
	int maxSum = 0;
	int arr[MATRIXSIZE][MATRIXSIZE];

	cout << "������� � ���������� ����������: " << endl;

	for (int i = 0; i < MATRIXSIZE; i++)
	{
		for (int j = 0; j < MATRIXSIZE; j++)
		{
			arr[i][j] = 10 + rand() % 91;
			cout << arr[i][j] << "\t";
			sumRows += arr[i][j];
		}
		cout << "����� ������ = " << sumRows << endl;

		if (maxSum < sumRows)
		{
			maxSum = sumRows;
		}

		sumRows = 0;
	}

	cout <<"\n������������ ����� ������ = " << maxSum << endl;
*/


//�������� ��� ������������� �������  � ������� ��������� � �������� �������, 
//������� ��������� �� �������� ���������� � ���������� �� �����. 
//������� ������ ��������� ��� ��������� � ������ � ��� ������.
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

	cout << "������� �������� ������� 1: " << endl;
	ScanArray(arr1, SIZE1);
	cout << "������� �������� ������� 2: " << endl;
	ScanArray(arr2, SIZE2);
	cout << "\n������ 1: " << endl;
	PrintArray(arr1, SIZE1);
	cout << "\n������ 2: " << endl;
	PrintArray(arr2, SIZE2);
}
*/


//���������� ������� ��������� ������ 5 � 5. 
//����� �������� �������, ������� �������� ��� ���������� ������� ��  30 �� 60. 
//������� ��� ��� �������, ������� ������� ������������ � ����������� �������� ����� ���������� �������.
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
	cout << "������� 5�5 �� ���������� ����������: " << endl;
	PrintArray(arr, SIZE);
	cout << "\n����������� ������� � ������� = " << FindMinValue(arr, SIZE) << endl;
	cout << "������������ ������� � ������� = " << FindMaxValue(arr, SIZE) << endl;
}
*/



	return 0;

}