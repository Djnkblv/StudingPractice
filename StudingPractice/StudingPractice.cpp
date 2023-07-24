﻿#include <iostream>		//директива include подключает библиотеку iostream
#include <ctime>		//Подключаем библиотеку с помощью которой можно вызывать функцию time

using namespace std;	//пространство имен, для сокращения кода


//Escape последовательности:
/*
(Они пишутся внутри кавычек)

\b	Удаление последнего выведенного символа
\n	Перейти на начало новой строки
\t	Перейти к следующей позиции табуляции

//////////////////////////////////

\\	Вывести обратную черту \ 
\"	Вывести двойную кавычку "
\'	Вывести одинарную кавычку '

*/

//Типы данных, Переменные, Константы:
/*

								ТИПЫ ДАННЫХ:
-----------------------------------------------------------------------------------------------------------
			Числа с плавающей запятой

Название	Размер в байтах		Пояснение 

Float		4					Вещественные числа, дроби (с запятой)
double		8					Вещественные числа, но еще длиннее

-----------------------------------------------------------------------------------------------------------
			Целые числа

Название	Размер в байтах		Пояснение								Диапазон значений

int			4					Описывает целые числа					от -2147483648 до 2147483648
short		2					Описывает короткие целые числа			от -32768 до 32768
long		4					Описывает длинные целые числа			от -2147483648 до 2147483648

------------------------------------------------------------------------------------------------------------
char		1					Описывает символы
bool		1					Описывает логические значения (true/false)
------------------------------------------------------------------------------------------------------------

Типы данных хранятся в оперативной памяти.



								ПЕРЕМЕННЫЕ:

Переменная обазначается так: тип_данных имя_переменной

Пример того, как объявлять(создавать) переменную:

int c;
double x;
char words;
bool false_or_true;

Инициализация (добавить в переменную свои данные):

c = 10;
x = 2.5;
words = 'w';
bool = true;


								КОНСТАНТЫ:
/*
Отличие константы от переменной, в том, что нельзя поменять ее данные, она является постоянной

Константы объявляются и инициализируются так же, как и переменные, но с ключевым словом const:
const int COUNT_DAY_IN_WEEK = 7;

По правилам наименования переменных, константу лучше называть ЗАГЛАВНЫМИ буквами.

*/

//Инкремент и декремент. Сокращенные арифметические формы:
/*
Инкремент ++, декремент --.

Эти операторы позволяют прибавлять или убавлять значения переменной на единицу.
Они бывают Постфиксные и префиксные.

Префиксный: ++1; (выполняется до)
Постфиксный: 1++; (выполняется после)


Сокращенные арифметические формы выглядят так:
a += 20;	то же самое, что и a = a + 20;
a -= 30;	то же самое, что и a = a - 30;
a *= 30;	то же самое, что и a = a * 30;
a / 2;		то же самое, что и a = a / 2;

*/

//Операторы сравнения. Логические операторы объединения и отрицательная инверсия:
/*

== - равно;
!= - не равно;
&& - и;			(Возвращает true если все выражения true, так же и с false)
|| - или;		(Возращает true если хотя-бы одно выражение true или false при false)
!= - не;

*/

//switch, оператор множественного выбора:
/*

Синтаксис:

switch (выражение)
{
case значение1:
	действие1;
	break;
case значение2:
	действие2;
	break;
.........
default:
	действие_по_умолчанию;
	break;
}

case означает, что если *выражение соответстует *значению кейса, то будет выполняться *действие, если нет,
то программа пойдет дальше по другим кейсам, switch не остановится пока не увидит команду break;

break - остановка свитча;

default - выполняется если выражение не соответствует ни одному кейсу (его писать необязательно, только при необходимости);

*/

//Циклы. While, do while:
/*

СИНТАКСИС while:

while (утверждение)
{
	действие для повторения;
}

while(пока) *утверждение является истинным, повторять действие;
Итерация - выполненное действие внутри цикла, одно действие = 1 итерация;

СИНТАКСИС do while:

do
{
Действие;
} while (утверждение)

Их отличие в том, что в цикле do, действие происходит перед проверкой на истинность;

*/

//Цикл for:
/*
СИНТАКСИС:

for (обозначение итератора; условие; инкремент итератора)
{
	действие;
	break;		//для остановки цикла
	continue;	//для прекращения итерации
}

*Итератор обычно обозначается переменной i;
Инкремент итератора меняется после выполнения действия;
Итераторов может быть несколько (обозначается через запятую);
Break; Позволяет выйти из цикла;
Оператор continue позволяет не выполнять итерацию при определенном условии, при этом цикл не будет остановлен;
Также, внутри цикла может находиться другой цикл см. в функции main;

*/

//Работа с отладчиком:
/*

ctrl + F5 - запуск кода без отладчика;
F5 - запустить отладку;
F10 - шаг с обходом (обычныq шаг отладчика по коду);
F11 - шаг с заходом (c захоом в функцию);
shift + F5 - остановка отладки;

Нажав слева кода на серое поле, можно обозначить точку останова, тогда отладчик остановчится дойдя до этой точки;

*/

//Одномерный массив array:
/*

ОБЪЯВЛЕНИЕ И ИНИЦИАЛИЗАЦИЯ:

тип_данных имя [количество элементов];

int arr [10];
arr [2] = 22;	//в элемент массива под номером 2, положили значение 22;

В [] лежит элемент массива, а значение внутри элемента;

Также можно инициализировать массив сразу:
int arr [] {1,4,6,7,3};
Если необходимо заполнить все элементы массива нулями можно сделать так:
int arr [4]{};

Ключевое слово sizeof(имя переменной, массива либо чего-нибудь): 
Определяет размер данных или количество элементов массива;

*/

//Двумерный массив: 
/*

СИНТАКСИС:
arr [][]; - В первой ячейке строки, во второй столбцы;

ОБЪЯВЛЕНИЕ И ИНИЦИАЛИЗАЦИЯ происходит точно так же как и с одномерным массивом:
int arr [кол-во строк][кол-во столбцов];
arr [1][1] = 45;

Также можно инициализировать массив сразу:
int arr [4][4] {{1,4,6,7,3},	{1,2,5,4},	{1,45,4,3},		{3,2,4,2}};	//тут в фигурных скобках элементы строк
Если необходимо заполнить все элементы массива нулями можно сделать так:
int arr [4][4]{};

*/

//Функции:
/*

СИНТАКСИС:
возвращаемое_значение имя_функции (параметры)
{
	тело_функции;
}

Например:
void foo()		//значение void, ничего не возвращает, данная функция не принимает никаких параметров т.к скобки пустые
{
	cout << "Я функция, меня вызвали!" << endl;
}

-Функции объявляются обязательно перед основной функцией main
--------------------------------------------------------------------------
ВЫЗОВ ФУНКЦИИ:
foo();		//скобки пустые, потомучто она не принимает никаких параметров, это было сделано при ее объявлении
-----------------------------------------------------------------------------
Другой пример:
int Sum(int a, int b)
{
	int return;
	return = a + b;
	return result;			//return - параметр функции для возвращения значения при ее вызове
}

ВЫЗОВ:
Sum (5, 6);					//В данном случае, функция вернет значение 11. 
-------------------------------------------------------------------------------
ПРОТОТИПЫ ФУНКЦИИ:
Прототипы необходимы для того, чтобы вызывать функцию из любого места, даже после вызова в main;
void (int a, int b);
Прототипы должны объявляться перед функцией main, можно без параметров, а само тело писать где угодно;
-------------------------------------------------------------------------------
КЛЮЧЕВОЕ СЛОВО INLINE. ВСТРАИВАЕМАЯ ФУНКЦИЯ:
inline int Sum (int a, int b)

inline - позволяет простеньким функциям не напрягаться, сразу встраивает функцию в код, без ее поиска и передачи параметров;
не работает, если в функции есть рекурсия, или если функция большая;
---------------------------------------------------------------------------------
ПЕРЕГРУЗКА ФУНКЦИЙ:
-Перегрузка функций подразумевает собой, несколько вариантов реализации функции. Например:

int Sum (int a, int b)
{
	return a + b;
}

double Sum (double a, double b)
{
	return a + b;
}

-В данном случае, функция Sum, может работать как с int, так и с double;
-Перегрузов может быть несколько, принимая разное количество и типы данных в параметрах, и возвращая разные типы данных;
-Хоть функции и  называются одинаково, а реализация (тело функции) может быть разной;


ШАБЛОНЫ ФУНКЦИЙ:

template <typename название_типа_которую_мы_создаем>
название_типа названиие_функции (тип имя_переменной)
{
	тело_функции;
}
Пример:

template <typename T>	//Шаблонная функция
T Sum (T a, T b)
{
	return a + b;
}

-Шаблоны используются для реализации функции которая может принимать и выдавать разные типы данных;
-Благодаря шаблоном, можно не использовать перегрузы;

Так же можно использовать разные типы в одной и той же функции:
template <typename T1, typename T2>

-так же вместо typename можно писать class (Это практически одно и то же);

*/

//Рекурсия:
/*

- Когда функция вызывается, то она попадает в стек (область памяти), после вывода результата она из стека удаляется;
- Если функция вызвает другую функцию, то она не исчезает из стека пока все функции не будут выполнены до конца;
- Рекурсия - вызов функцией самой себя;

ПРИМЕР:

int Foo (int a)
{
	if (a < 1) 
	{
		return 0;		//Условия выхода из рекурсии, чтобы рекурсия не была бесконечной;
	}
	a--;

	cout << a << endl;	

	return Foo (a);		//Функция вызывает саму себя;
}

*/

//Указатели:
/*
- Указатели - это переменная, которая содержит адрес другой переменной, а так же других объектов;
- Тип данных указателя должен соответствовать типу данных на который он указывает;

int *px = &a;		//берём адрес у переменной a и присваиваем этот адрес указателю px;
* - Означает, что переменная типа указатель;
& - Амперсант (оператор взятия адреса)
px - сокращенно от pointer x (указатель с названием x);

=================================================================================================

МАССИВЫ УКАЗАТЕЛИ:
arr[2] равносильно *(arr+2);

- массив является указатаелем;
- Указатели для массива нужны, для работы с динамическими массивами;
================================================================================================
ПЕРЕДАЧА ПАРАМЕТРОВ ПО УКАЗАТЕЛЮ:

void Foo(int* pa)
{
	(*pa)++;	//Сначала мы разыменовываем указатель по значению, и только потом совершаем инкремент;
}

Вызов функции:
Foo(&a);	

- Таким образом, мы меняем значение переменной с помощью указателя;
- Функция может выводить несколько значений, если  мы работаем через указатели;


*/


void Swap(int* pa, int* pb)
{
	int c;
	c = (*pa);
	(*pa) = (*pb);
	(*pb) = c;
}


int main()
{
	setlocale(LC_ALL, "Rus");

	//Escape последовательности, вывод стишка на консоль:	
	/*
		cout << "Привет епта!\n";
		cout << "wassap my nigga!\n\n";
		cout << "\tБЕЙБИ\t\t КАК\t\t У\t\t ТЕБЯ\t\t ДИЛАА\n";
		cout << "И сказала она: \"ебанутые люди сверху!\"\n";
		cout << "\n\t\t\tДЗ Урок #3.Стихотворение.\n";
		cout << "\n\t\t\tСпать пора, уснул бычок,\n\t\t\tЛег в коробку на бочок,\n";
		cout << "\t\t\tСонный мишка лег в кровать,\n\t\t\tТолько слон не хочет спать,\n ";
		cout << "\t\t\tГоловой кивает слон,\n\t\t\tОн слонихе шлет поклон.\n";
	*/

	//Переменные. Объявление и инициализация с разными типами данных:
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

	//Константы. Объявление и инициализация констант:
	/*

		const int COUNT_DAY_IN_WEEL = 7;
		const char NEW_LINE = '\n';
		const char TAB = '\t';
		cout << TAB << TAB << COUNT_DAY_IN_WEEL << NEW_LINE;

	*/

	//Ввод данных с помощью cin:
	/*
		int Var1, Var2;

		cout << "Введите 2 числа: ";
		cin >> Var1 >> Var2;
		cout << "Число 1 = " << Var1 << endl;
		cout << "Число 2 = " << Var2 << endl;
	*/

	//Арифметические операторы:
	/*
		int a, b, c, s;
		double average;

		cout << "Введите 3 числа: " << endl;
		cin >> a >> b >> c;

		s = a + b + c;
		cout << "Сумма = " << s << endl;
		s = a * b * c;
		cout << "Произведение = " << s << endl;
		average = (double)(a + b + c) / 3;		//Без (double), будет выводиться целоцисленное цисло(не знаю почему)
		cout << "Среднее арифметическое = " << average << endl;
	*/

	//Конструкция логического выбора. if else. Проверка введенного числа на четность:
	/*
		int a;
		cout << "Введите число: ";
		cin >> a;



		if (a % 2)		//Если остаток ноль, то это false, в ином случае это true
		{
			cout << "\nВаше число " << a <<" нечетное" << endl;
		}
		else
		{
			cout << "Ваше число " << a <<" четное";
		}
	*/

	//switch, оператор множественного выбора. Калькулятор:
	/*

		int a, b;
		char Symb;
		cout << "Введите первое число: ";
		cin >> a;
		cout << "Введите арифметическое выражение (+,-,*,/): ";
		cin >> Symb;
		cout << "Введите второе число: ";
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
			cout << a << " / " << b << " = " << (float)a / b << endl;	//(float) Приведение типа данных, чтобы отображался в виде дробной части
			break;
		default:
			cout << "Вы выбрали неверное выражение!" << endl;
			break;
		}

	*/

	//Циклы. While, do while. ДЗ:
	/*

		int a, b, i, z, sum;
		char s;

		cout << "1. Разработать программу, которая выводит на экран линию из символов." << endl;
		cout << "	Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная" << endl;
		cout << "	- указывает пользователь. " << endl;

		cout << "\n2. Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе." << endl;

		cout << "\nВыберите задание (1 или 2): " << endl;
		cin >> z;

		switch (z)
		{
		case 1:
			cout << "\nВыберите какой символ будет выстроен в линию: ";
			cin >> s;
			cout << "Сколько этих символов будет?: ";
			cin >> a;
			cout << "Каким образом будет выстроена линия? 1 - вертикально, 2 - горизонтально: ";
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
				cout << "Ошибка!";
			}
			break;

		case 2:

			sum = 0;
			cout << "Введите диапозон чисел (через пробел): ";
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
			cout << "\nСумма нечетных чисел в диапазоне = " << sum;
			break;

		default:
			cout << "Такого задания тут нет!";

			break;
		}

	*/

	//Цикл for, c вложенной конструкцией. ДЗ:
	/*
		cout << "Написать программу, которая выводит на экран прямоугольник символом *. \nВысота и ширина задаётся пользователем." << endl;

		int a, b;

		cout << "\nВведите длину и ширину (через пробел): ";
		cin >> a >> b;

		for (int i = 0; i < a; i++)		//1-й цикл отвечающий за длину
		{
			for (int j = 0; j < b; j++)	//2-й цикл отвечающий за ширину
			{
				cout << "*";
			}
			cout << endl;
		}
	*/

	//Одномерный массив array. Цикл с массивом, заполнение цикла случайными значениями. ДЗ:
	/*
	srand(time(NULL));		//функция time позволяет просчитывать время (в данном случае каждый раз, генерируются случайные числа)


	int const SIZE = 10;
	int arr[SIZE];
	bool alreadyThere;

	cout << "Заполнить массив случайными числами от 0 до 20-ти. В массиве не должно быть одинаковых значений" << endl;
	cout << "Массив с уникальными значениями:" << endl;

	for (int i = 0; i < SIZE; )
	{
		alreadyThere = false;
		int newRandomValue = rand() % 20;	//&20 - пишется для того, чтобы генерировались числа не больше 20-ти

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

	cout << "\nМинимальное число из массива: " << min << endl;

	//Функция rand() - присваивает случайное значение переменной	
	//int a = rand() % 10 + 5;	//%10+5 - позволяет сгенерировать число от 5-ти до 15-ти

*/

	//Двумерный массив. Заполнение случайными числами: 
	/*
	const int ROWS = 5;	//Объявление констант, для строк и столбцов массива
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

	//Функции. Заполнение массива: 
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

	//Перегрузка функции:
	/*

int Sum(int a, int b)
{
	cout << "Вариант функции Sum с int'овым типом данных" << endl;
	return a + b;
}

double Sum(double a, double b)
{
	cout << "Вариант функции Sum с double'овым типом данных" << endl;
	return a + b;
}

int Sum(int a, int b, int c)
{
	cout << "Вариант функции Sum с 3-мя параметрами" << endl;
	return a + b + c;
}

int main()
{

	cout << Sum(2, 50) << endl;
	cout << Sum(2.5, 2.7) << endl;
	cout << Sum(20, 30, 2) << endl;
}
*/

	//Шаблоны функции:
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

	//Рекурсия. Факториал:
	/*
	ФОрмула факториала: N! = N * (N - 1)!
	
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
	cout << "Введите число N: ";
	cin >> N;
	cout << "Факториал числа " << N << " = " << Fact(N) << endl;
}

	*/
	
	//Указатели:

	/*
	int a = 5;

	int *px = &a;


	cout << px << endl;			//обращаясь к указателю без * мы получим название адреса;

	cout << *px << endl;		//обращаясь к указателю с * мы получим значение переменной так же это означает, что мы хотим разыменовать указатель;;

	int* px2 = &a;

	cout << "\npx2 =\t  " << px2 << endl;

	*px2 = 2;

	cout << "px 2, после изменения: \t" << *px2 << endl;
	=====================================================================
	
	ПЕРЕДАЧА ПАРАМЕТРОВ ПО УКАЗАТЕЛЮ. ДЗ:




	*/

	//Напишите функцию, меняющую местами значения переменных с помощью указателей.

	int a, b;

	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;

	Swap(&a, &b);
	cout << "Происходит так называемый свап..." << endl;

	cout << "\nзначение a = " << a << endl;
	cout << "значение b = " << b << endl;



	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
}
