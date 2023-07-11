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
	
	cout << "Введите 3 числа: " << endl;
	cin >> a >> b >> c;

	s = a + b + c;
	cout << "Сумма = " << s << endl;
	s = a * b * c;
	cout << "Произведение = " << s << endl;
	s = a + b + c;
	s = s / 3;
	cout << "Среднее арифметическое = " << s << endl;
*/






}