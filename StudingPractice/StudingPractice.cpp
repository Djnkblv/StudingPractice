﻿#include <iostream>		//директива include подключает библиотеку iostream
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

//Типы данных:
/*
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

*/

//Переменные:
/*

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

*/

//Константы:
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




}