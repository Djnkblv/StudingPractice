


//������



					//Escape ������������������:
/*
(��� ������� ������ �������)

\b	�������� ���������� ����������� �������
\n	������� �� ������ ����� ������
\t	������� � ��������� ������� ���������

//////////////////////////////////

\\	������� �������� ����� \
\"	������� ������� ������� "
\'	������� ��������� ������� '

*/

					//���� ������, ����������, ���������:
/*

								���� ������:
-----------------------------------------------------------------------------------------------------------
			����� � ��������� �������

��������	������ � ������		���������

Float		4					������������ �����, ����� (� �������)
double		8					������������ �����, �� ��� �������

-----------------------------------------------------------------------------------------------------------
			����� �����

��������	������ � ������		���������								�������� ��������

int			4					��������� ����� �����					�� -2147483648 �� 2147483648
short		2					��������� �������� ����� �����			�� -32768 �� 32768
long		4					��������� ������� ����� �����			�� -2147483648 �� 2147483648

------------------------------------------------------------------------------------------------------------
char		1					��������� �������
bool		1					��������� ���������� �������� (true/false)
------------------------------------------------------------------------------------------------------------

- ���� ������ �������� � ����������� ������.



								����������:

���������� ������������ ���: ���_������ ���_����������

������ ����, ��� ���������(���������) ����������:

int c;
double x;
char words;
bool false_or_true;

������������� (�������� � ���������� ���� ������):

c = 10;
x = 2.5;
words = 'w';
bool = true;


								���������:
/*
- ������� ��������� �� ����������, � ���, ��� ������ �������� �� ������, ��� �������� ����������

��������� ����������� � ���������������� ��� ��, ��� � ����������, �� � �������� ������ const:
const int COUNT_DAY_IN_WEEK = 7;

- �� �������� ������������ ����������, ��������� ����� �������� ���������� �������.

*/

					//��������� � ���������. ����������� �������������� �����:
/*
��������� ++, ��������� --.

- ��� ��������� ��������� ���������� ��� �������� �������� ���������� �� �������.
- ��� ������ ����������� � ����������.

����������: ++1; (����������� ��)
�����������: 1++; (����������� �����)


����������� �������������� ����� �������� ���:
a += 20;	�� �� �����, ��� � a = a + 20;
a -= 30;	�� �� �����, ��� � a = a - 30;
a *= 30;	�� �� �����, ��� � a = a * 30;
a / 2;		�� �� �����, ��� � a = a / 2;

*/

					//��������� ���������. ���������� ��������� ����������� � ������������� ��������:
/*

== - �����;
!= - �� �����;
&& - �;			(���������� true ���� ��� ��������� true, ��� �� � � false)
|| - ���;		(��������� true ���� ����-�� ���� ��������� true ��� false ��� false)
!= - ��;

*/

					//switch, �������� �������������� ������:
/*

���������:

switch (���������)
{
case ��������1:
	��������1;
	break;
case ��������2:
	��������2;
	break;
.........
default:
	��������_��_���������;
	break;
}

- case ��������, ��� ���� *��������� ������������ *�������� �����, �� ����� ����������� *��������, ���� ���,
�� ��������� ������ ������ �� ������ ������, switch �� ����������� ���� �� ������ ������� break;

- break - ��������� ������;

- default - ����������� ���� ��������� �� ������������� �� ������ ����� (��� ������ �������������, ������ ��� �������������);

*/

					//�����. While, do while:
/*

��������� while:

while (�����������)
{
	�������� ��� ����������;
}

- while(����) *����������� �������� ��������, ��������� ��������;
- �������� - ����������� �������� ������ �����, ���� �������� = 1 ��������;

��������� do while:

do
{
��������;
} while (�����������)

- �� ������� � ���, ��� � ����� do, �������� ���������� ����� ��������� �� ����������;

*/

					//���� for:
/*
���������:

for (����������� ���������; �������; ��������� ���������)
{
	��������;
	break;		//��� ��������� �����
	continue;	//��� ����������� ��������
}

- *�������� ������ ������������ ���������� i;
- ��������� ��������� �������� ����� ���������� ��������;
- ���������� ����� ���� ��������� (������������ ����� �������);
- Break; ��������� ����� �� �����;
- �������� continue ��������� �� ��������� �������� ��� ������������ �������, ��� ���� ���� �� ����� ����������;
- �����, ������ ����� ����� ���������� ������ ���� ��. � ������� main;

*/

					//������ � ����������:
/*

ctrl + F5 - ������ ���� ��� ���������;
F5 - ��������� �������;
F10 - ��� � ������� (������q ��� ��������� �� ����);
F11 - ��� � ������� (c ������ � �������);
shift + F5 - ��������� �������;

- ����� ����� ���� �� ����� ����, ����� ���������� ����� ��������, ����� �������� ������������ ����� �� ���� �����;

*/

					//���������� ������ array:
/*

���������� � �������������:

���_������ ��� [���������� ���������];

int arr [10];
arr [2] = 22;	//� ������� ������� ��� ������� 2, �������� �������� 22;

� [] ����� ������� �������, � �������� ������ ��������;

����� ����� ���������������� ������ �����:
int arr [] {1,4,6,7,3};
���� ���������� ��������� ��� �������� ������� ������ ����� ������� ���:
int arr [4]{};

- �������� ����� sizeof(��� ����������, ������� ���� ����-������):
���������� ������ ������ ��� ���������� ��������� �������;

*/

					//��������� ������: 
/*

���������:
arr [][]; - � ������ ������ ������, �� ������ �������;

���������� � ������������� ���������� ����� ��� �� ��� � � ���������� ��������:
int arr [���-�� �����][���-�� ��������];
arr [1][1] = 45;

����� ����� ���������������� ������ �����:
int arr [4][4] {{1,4,6,7,3},	{1,2,5,4},	{1,45,4,3},		{3,2,4,2}};	//��� � �������� ������� �������� �����
���� ���������� ��������� ��� �������� ������� ������ ����� ������� ���:
int arr [4][4]{};

*/

					//�������:
/*

���������:
������������_�������� ���_������� (���������)
{
	����_�������;
}

��������:
void foo()		//�������� void, ������ �� ����������, ������ ������� �� ��������� ������� ���������� �.� ������ ������
{
	cout << "� �������, ���� �������!" << endl;
}

- ������� ����������� ����������� ����� �������� �������� main
--------------------------------------------------------------------------
����� �������:
foo();		//������ ������, ��������� ��� �� ��������� ������� ����������, ��� ���� ������� ��� �� ����������
-----------------------------------------------------------------------------
������ ������:
int Sum(int a, int b)
{
	int return;
	return = a + b;
	return result;			//return - �������� ������� ��� ����������� �������� ��� �� ������
}

�����:
Sum (5, 6);					//� ������ ������, ������� ������ �������� 11.
-------------------------------------------------------------------------------
��������� �������:
- ��������� ���������� ��� ����, ����� �������� ������� �� ������ �����, ���� ����� ������ � main;
void (int a, int b);
- ��������� ������ ����������� ����� �������� main, ����� ��� ����������, � ���� ���� ������ ��� ������;
-------------------------------------------------------------------------------
�������� ����� INLINE. ������������ �������:
inline int Sum (int a, int b)

- inline - ��������� ����������� �������� �� �����������, ����� ���������� ������� � ���, ��� �� ������ � �������� ����������;
�� ��������, ���� � ������� ���� ��������, ��� ���� ������� �������;
---------------------------------------------------------------------------------
���������� �������:
- ���������� ������� ������������� �����, ��������� ��������� ���������� �������. ��������:

int Sum (int a, int b)
{
	return a + b;
}

double Sum (double a, double b)
{
	return a + b;
}

- � ������ ������, ������� Sum, ����� �������� ��� � int, ��� � � double;
- ���������� ����� ���� ���������, �������� ������ ���������� � ���� ������ � ����������, � ��������� ������ ���� ������;
- ���� ������� �  ���������� ���������, � ���������� (���� �������) ����� ���� ������;


������� �������:

template <typename ��������_����_�������_��_�������>
��������_���� ���������_������� (��� ���_����������)
{
	����_�������;
}
������:

template <typename T>	//��������� �������
T Sum (T a, T b)
{
	return a + b;
}

- ������� ������������ ��� ���������� ������� ������� ����� ��������� � �������� ������ ���� ������;
- ��������� ��������, ����� �� ������������ ���������;

��� �� ����� ������������ ������ ���� � ����� � ��� �� �������:
template <typename T1, typename T2>

- ��� �� ������ typename ����� ������ class (��� ����������� ���� � �� ��);

*/

					//��������:
/*

- ����� ������� ����������, �� ��� �������� � ���� (������� ������), ����� ������ ���������� ��� �� ����� ���������;
- ���� ������� ������� ������ �������, �� ��� �� �������� �� ����� ���� ��� ������� �� ����� ��������� �� �����;
- �������� - ����� �������� ����� ����;

������:

int Foo (int a)
{
	if (a < 1)
	{
		return 0;		//������� ������ �� ��������, ����� �������� �� ���� �����������;
	}
	a--;

	cout << a << endl;

	return Foo (a);		//������� �������� ���� ����;
}

*/

					//���������:
/*
- ��������� - ��� ����������, ������� �������� ����� ������ ����������, � ��� �� ������ ��������;
- ��� ������ ��������� ������ ��������������� ���� ������ �� ������� �� ���������;

int *px = &a;		//���� ����� � ���������� a � ����������� ���� ����� ��������� px;
* - ��������, ��� ���������� ���� ���������;
& - ��������� (�������� ������ ������)
px - ���������� �� pointer x (��������� � ��������� x);

=================================================================================================

������� ���������:
arr[2] ����������� *(arr+2);

- ������ �������� �����������;
- ��������� ��� ������� �����, ��� ������ � ������������� ���������;
================================================================================================
�������� ���������� �� ���������:

void Foo(int* pa)
{
	(*pa)++;	//������� �� �������������� ��������� �� ��������, � ������ ����� ��������� ���������;
}

����� �������:
Foo(&a);

- ����� �������, �� ������ �������� ���������� � ������� ���������;
- ������� ����� �������� ��������� ��������, ����  �� �������� ����� ���������;


*/

					//������:
/*

- ������ - ����������, ��� �� ��� � ��������� ������ � ���� �����.

int &aRef = a;
aref = 55;		//� ������ ����� ���������� ��� � ������� ����������;

- Ref - reference (������);
- � ������� �� ���������, ������ �� ����� ���� & ��� �������� ��������;
- � ��� ��� ��������� ������������� (*);
=============================================================================
�������� ������ � �������:

- �������� ������ ������ �� �������� ����������;
- � ������� �� ���������, ������ �� ��������� �������� ������������� ��� �������� ��������;

void Foo2(int& a)
{
	a = 2;
}


����� �������:

Foo2(value);		//��� ������ �������, �� ����� (&) ��� ������������ ��������, � ������� �� ���������;

*/












//��������



					//Escape ������������������, ����� ������ �� �������:	
	/*
		cout << "������ ����!\n";
		cout << "wassap my nigga!\n\n";
		cout << "\t�����\t\t ���\t\t �\t\t ����\t\t �����\n";
		cout << "� ������� ���: \"�������� ���� ������!\"\n";
		cout << "\n\t\t\t�� ���� #3.�������������.\n";
		cout << "\n\t\t\t����� ����, ����� �����,\n\t\t\t��� � ������� �� �����,\n";
		cout << "\t\t\t������ ����� ��� � �������,\n\t\t\t������ ���� �� ����� �����,\n ";
		cout << "\t\t\t������� ������ ����,\n\t\t\t�� ������� ���� ������.\n";
	*/

					//����������. ���������� � ������������� � ������� ������ ������:
	/*

		int Age, a, b;
		Age = 10;
		a = 1;
		b = 5;
		cout << "int:\n";
		cout << Age << " " << a << b << endl;

		double d = 12.50;
		cout << "double:\n" << d << endl;

		char word = 'w';
		cout << "char:\n" << word << endl;

		bool false_or_true = true;
		cout << "bool:\n"<<false_or_true << "\nfalse = 0, true = 1" << endl;

	*/

					//���������. ���������� � ������������� ��������:
	/*

		const int COUNT_DAY_IN_WEEL = 7;
		const char NEW_LINE = '\n';
		const char TAB = '\t';
		cout << TAB << TAB << COUNT_DAY_IN_WEEL << NEW_LINE;

	*/

					//���� ������ � ������� cin:
	/*
		int Var1, Var2;

		cout << "������� 2 �����: ";
		cin >> Var1 >> Var2;
		cout << "����� 1 = " << Var1 << endl;
		cout << "����� 2 = " << Var2 << endl;
	*/

					
					//�������������� ���������:
	/*
		int a, b, c, s;
		double average;

		cout << "������� 3 �����: " << endl;
		cin >> a >> b >> c;

		s = a + b + c;
		cout << "����� = " << s << endl;
		s = a * b * c;
		cout << "������������ = " << s << endl;
		average = (double)(a + b + c) / 3;		//��� (double), ����� ���������� ������������� �����(�� ���� ������)
		cout << "������� �������������� = " << average << endl;
	*/

					//����������� ����������� ������. if else. �������� ���������� ����� �� ��������:
	/*
		int a;
		cout << "������� �����: ";
		cin >> a;



		if (a % 2)		//���� ������� ����, �� ��� false, � ���� ������ ��� true
		{
			cout << "\n���� ����� " << a <<" ��������" << endl;
		}
		else
		{
			cout << "���� ����� " << a <<" ������";
		}
	*/

					//switch, �������� �������������� ������. �����������:
	/*

		int a, b;
		char Symb;
		cout << "������� ������ �����: ";
		cin >> a;
		cout << "������� �������������� ��������� (+,-,*,/): ";
		cin >> Symb;
		cout << "������� ������ �����: ";
		cin >> b;

		switch (Symb)
		{
		case '+':
			cout << a << " + " << b << " = " << a + b << endl;
			break;
		case '-':
			cout << a << " - " << b << " = " << a - b << endl;
			break;
		case '*':
			cout << a << " * " << b << " = " << a * b << endl;
			break;
		case '/':
			cout << a << " / " << b << " = " << (float)a / b << endl;	//(float) ���������� ���� ������, ����� ����������� � ���� ������� �����
			break;
		default:
			cout << "�� ������� �������� ���������!" << endl;
			break;
		}

	*/

					//�����. While, do while. ��:
	/*

		int a, b, i, z, sum;
		char s;

		cout << "1. ����������� ���������, ������� ������� �� ����� ����� �� ��������." << endl;
		cout << "	����� ��������, ����� ������������ ������, � ����� ����� ����� - ������������, ��� ��������������" << endl;
		cout << "	- ��������� ������������. " << endl;

		cout << "\n2. �������� ���������, ������� ������� ����� ���� ����� �������� ����� � ���������, ��������� ������������." << endl;

		cout << "\n�������� ������� (1 ��� 2): " << endl;
		cin >> z;

		switch (z)
		{
		case 1:
			cout << "\n�������� ����� ������ ����� �������� � �����: ";
			cin >> s;
			cout << "������� ���� �������� �����?: ";
			cin >> a;
			cout << "����� ������� ����� ��������� �����? 1 - �����������, 2 - �������������: ";
			cin >> b;

			i = 1;

			switch (b)
			{
			case 1:
				while (i <= a)
				{
					cout << s << endl;
					i++;
				}
				break;

			case 2:
				while (i <= a)
				{
					cout << s;
					i++;
				}
				break;

			default:
				cout << "������!";
			}
			break;

		case 2:

			sum = 0;
			cout << "������� �������� ����� (����� ������): ";
			cin >> a >> b;
			i = a;

			while (i <= b)
			{
				if (i % 2 != 0 && i >= 0)
				{
					sum += i;
					i++;
				}
				else
				{
					i++;
				}
			}
			cout << "\n����� �������� ����� � ��������� = " << sum;
			break;

		default:
			cout << "������ ������� ��� ���!";

			break;
		}

	*/

					//���� for, c ��������� ������������. ��:
	/*
		cout << "�������� ���������, ������� ������� �� ����� ������������� �������� *. \n������ � ������ ������� �������������." << endl;

		int a, b;

		cout << "\n������� ����� � ������ (����� ������): ";
		cin >> a >> b;

		for (int i = 0; i < a; i++)		//1-� ���� ���������� �� �����
		{
			for (int j = 0; j < b; j++)	//2-� ���� ���������� �� ������
			{
				cout << "*";
			}
			cout << endl;
		}
	*/

					//���������� ������ array. ���� � ��������, ���������� ����� ���������� ����������. ��:
	/*
	srand(time(NULL));		//������� time ��������� ������������ ����� (� ������ ������ ������ ���, ������������ ��������� �����)


	int const SIZE = 10;
	int arr[SIZE];
	bool alreadyThere;

	cout << "��������� ������ ���������� ������� �� 0 �� 20-��. � ������� �� ������ ���� ���������� ��������" << endl;
	cout << "������ � ����������� ����������:" << endl;

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRandomValue = rand() % 20;	//&20 - ������� ��� ����, ����� �������������� ����� �� ������ 20-��

		for (int j = 0; j < i; j++)
		{
			if (arr[j] == newRandomValue)
			{
				alreadyThere = true;
				break;
			}
		}

		if (!alreadyThere)
		{
			arr[i] = newRandomValue;
			i++;
		}
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	int min = arr[0];

	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	cout << "\n����������� ����� �� �������: " << min << endl;

	//������� rand() - ����������� ��������� �������� ����������
	//int a = rand() % 10 + 5;	//%10+5 - ��������� ������������� ����� �� 5-�� �� 15-��

*/

					//��������� ������. ���������� ���������� �������: 
	/*
	const int ROWS = 5;	//���������� ��������, ��� ����� � �������� �������
	const int COLS = 8;

	int arr[ROWS][COLS];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	*/

					//�������. ���������� �������: 
	/*
	void fillArray(int arr[], const int size)
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 10;
		}
	}

	void printArray(int arr[], const int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << "\t";
		}
	}

	//int main()
	{
		const int SIZE = 10;
		int arr[SIZE];

		fillArray(arr, SIZE);
		printArray(arr, SIZE);

		cout << endl;
	}
	*/

					//���������� �������:
	/*

	int Sum(int a, int b)
	{
		cout << "������� ������� Sum � int'���� ����� ������" << endl;
		return a + b;
	}

	double Sum(double a, double b)
	{
		cout << "������� ������� Sum � double'���� ����� ������" << endl;
		return a + b;
	}

	int Sum(int a, int b, int c)
	{
		cout << "������� ������� Sum � 3-�� �����������" << endl;
		return a + b + c;
	}

	int main()
	{

		cout << Sum(2, 50) << endl;
		cout << Sum(2.5, 2.7) << endl;
		cout << Sum(20, 30, 2) << endl;
	}
	*/

					//������� �������:
	/*
template <typename T1, typename T2>
void Sum(T1 a, T2 b)
	{
		cout << a << endl;
		cout << b << endl;
}

main()
{
	Sum(2.3, "sexy");
}

	*/

					//��������. ���������:
	/*
	������� ����������: N! = N * (N - 1)!

	int Fact(int N)
{
	if (N == 0)
		return 0;
	if (N == 1)
		return 1;

	return N * Fact(N - 1);
}

main ()
{
	int N;
	cout << "������� ����� N: ";
	cin >> N;
	cout << "��������� ����� " << N << " = " << Fact(N) << endl;
}

	*/

					//���������:
	/*
	int a = 5;

	int *px = &a;


	cout << px << endl;			//��������� � ��������� ��� * �� ������� �������� ������;

	cout << *px << endl;		//��������� � ��������� � * �� ������� �������� ���������� ��� �� ��� ��������, ��� �� ����� ������������ ���������;;

	int* px2 = &a;

	cout << "\npx2 =\t  " << px2 << endl;

	*px2 = 2;

	cout << "px 2, ����� ���������: \t" << *px2 << endl;
	=====================================================================

	�������� ���������� �� ���������. ��:

	//�������� �������, �������� ������� �������� ���������� � ������� ����������.

	void Swap(int* pa, int* pb)
	{
		int c;
		c = (*pa);
		(*pa) = (*pb);
		(*pb) = c;
	}

	int main()
	{

		int a, b;

		cout << "������� a: ";
		cin >> a;
		cout << "������� b: ";
		cin >> b;

		Swap(&a, &b);
		cout << "���������� ��� ���������� ����..." << endl;

		cout << "\n�������� a = " << a << endl;
		cout << "�������� b = " << b << endl;
	}



	*/

					//������. ��:
	/*

	int a = 5;

	int& aRef = a;

	cout << aRef << endl;

	aRef = 903;

	cout << aRef << endl;
	====================================================
	�������� ���������� � �������:

		void Foo (int a)		//�������� ���������� ������ ���;
	{
		a = 1;
	}

	void Foo2(int& a)		//�������� ���������� ����� ������;
	{
		a = 2;
	}

	void Foo3(int* a)		//�������� ���������� ����� ���������;
	{
		*a = 3;
	}
	int main ()

	{
		int value = 5;
		cout << "value = " << value << endl << endl;

		cout << "Foo " << endl;
		Foo(value);											//�������� ���������� ������ ���;
		cout << "value = " << value << endl << endl;

		cout << "Foo2 " << endl;
		Foo2(value);										//�������� ���������� ����� ������;
		cout << "value = " << value << endl << endl;

		cout << "Foo3 " << endl;
		Foo3(&value);										//�������� ���������� ����� ���������;
		cout << "value = " << value << endl << endl;

	}
	================================================================================================
	�������� ���������� ���������� ��:

	//�������� ��������� ������� ������� ������ ������� �������� 2 - � ���������� � ������� ������.

	template <typename T >

	void Swap(T& a, T& b)
	{
		T c = a;
		a = b;
		b = c;
	}


	int main()
	{

		double a = 50.2;
		double b = 22.22;

		cout << "a = " << a << endl;
		cout << "b = " << b << endl;

		cout << "\nswapping...\n" << endl;

		Swap(a, b);

		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}

	*/



