﻿#include <iostream>		//директива include подключает библиотеку iostream
#include <ctime>		//Подключаем библиотеку с помощью которой можно вызывать функцию time
#include <string>		//Библиотека позволяющая работать с классом string (строки)
#define PI 3.14			//Определили константу PI

using namespace std;	//пространство имен, для сокращения кода


//Строки. Строковые массивы:

/*
 - Тип данных char может хранить только одно значение, (один символ);

	char symbol = 'q'

- Но, если объявить переменную как массив, char может принимать множество символов;
- строка является массивом из символов char;

	char string[] = "abcdef";	//Символ обозначается одинарными кавычками '', а строка двойными "" ;

- последний элемент строкового массива, должен хранить в себе значение \0 (Нулл терминатор), что означает конец строки;

	char string [] = {'H','E','L','L','O',\0};

- Функция strlen показывает сколько символов в строке;

	cout << strlen(string) << endl;		//Вывод количества символов в переменной string;
 ===========================================================================================
 Строки и указатели:

	const char* string = "Hello!";

 - Со строками можно обращаться так же как и с динамическим массивом, если объявить указатель, то можно не обозначать
 строку как массив;

 - Функция strlen(), передает количество символов в строке:
	
	cout << strlen(str) << endl;
=========================================================================================
Конкатенация (обьединение) строк:

- Тип данных string, позволяет создавать переменные со значением строки;
- Для того, чтобы использовать тип данных string, необходимо подключить библиотеку <string>;
- Обьединение 2-х строк происходит путем их суммирования:
	string str1 = "Hello ";
	string str2 = "World!";
	string result;

	result = str1+ " " + str2;	//мы можем даже добавить пробел в переменную с типом данных string;
	cout << result << endl;

*/

//Преобразование типов в стиле С:

/*
- Для преобразования типа данных переменной в другой тип данных, перед названием переменной в скобках пишем новый тип данных;

	double a = 33.3;
	cout << (int)a << endl;		//из double преобразовали в int;

	a = (char)a;	//Преобразовали переменную а из int в char;

*/

//Указатели на функцию:

/*
- Синтаксис: тип функции(*имя указателя)(Спецификация параметров);

- Уазатель на функцию с одним типом данных, не будет указывать на функцию с другим типом данных;

	void(*fooPointer)();

	fooPointer = Foo1;		//Присваиваем функцию к указателю;

	fooPointer();			//Обращаемся к указателю, который выполняет функцию на которую указывает;

*/

//Директива #define. Макрос функция:

/*

- define переводится как определить;
- с помощью такой директивы, можно создавать макро-определения (макросы);

Например:	#define PI 3.14		//Определили константу PI, которая может в дальнейшем использоваться в программе;

- Отличие такого определения от обычной константы в том, что директива препроцессора определяет константу до компиляции;
==========================================================================================================

- макрос определяется с помощью директивы #define;
	
	#define MACROS(x,y)((x)*(y))	//Определили макрос который умножает параметры x и y;





*/

//Условная компиляция: 

/*
- Условные компиляции нужны для того, чтобы закомментировать большие участки кода;

- #ifdef и #endef #else;

	#ifdef DEBUG							//Если константа DEBUG определена директивой #define
		cout<<"Дебаг определен"<<endl;		//То выводим текст
	#else									//а если нет
		cout<<"Дебаг не опрделен"<<endl;	//то выводим вот этот текст
	#endif									//Конец ifdef'а

- Из кода понятно, что условная компиляция зависит от константы, которая определяется с помощью директивы #define;
- так же есть разновидность #ifndef, она работает так же, только инвертированно;
	
	#ifndef DEBUG							//Если DEBUG НЕ определен
		cout<<"Дебаг не определен"<<endl;	//То выводим этот текст
	#endif									//конец #ifndef'а 

- #if, #elif. Работает так же, только с конкретным условием:

	#if DEBUG < 4							//Если константа DEBUG меньше 4-х
		cout<<"DEBUG < 4"<<endl;			//То выводим данный текст
	#elif DEBUG == 5						//Если DEBUG равно 5 (Аналогично с else if)
		cout<<"DEBUG == 5"<<endl;			//То выводим данный текст
	#endif									//Конец #if'а

- Из кода понятно, что необходимо при определении константы DEBUG дать ей значение, например #define DEBUG 5


*/

//Тернарный услоный оператор:

/*
- Унарный оператор взаимодействует с одной переменной:
	a++;
	a+3;
- Бинарный оператор взаимодейстует с двумя переменными:
	a + b;
	b + d;
- тернарный опреатор повторяет if else, и выглядит так: "?:";
	(a < 10) ? cout << "a < 10" << endl : cout << "a >= 10" << endl;
	(условие) ? действие1 : действие2;	//если условие верное то действие1 если нет, то действие2
- ? (if), : (else);
	
- Логика else if:
	a < 10 ? cout << "a < 10" << endl : (a > 10) cout << "a >= 10" << endl : cout << "a == 10";
	(условие1) ? действие1 : (условие2) действие2 : действие3;

*/



					//ФУНКЦИИ:







int main()
{

	setlocale(LC_ALL, "Rus");

	//Строки и указатели. ДЗ:

	/*

 					//ФУНКЦИИ:
int StrLength(const char* str)
{
	int counter = 0;
	//Пока значение строки с итераторатором counter не равен \0 (концу строки), прибавляем ему 1;
	while (str[counter]!='\0')
	{
		counter++;
	}

	return counter;
}


int main()
{
	//Написать свою реализацию функции strlen (Считает количество символов в строке);

	const char* str = "Hello!";

	cout << StrLength(str) << endl;
	*/

	//Конкатенация строк:
	
	/*
	string str1 = "Мартин";
	string str2 = "Игоревич";
	string str3 = "Дугин";
	string result;

	result = "Фамилия " + str3 + "\tИмя " + str1 + "\tОтчество " + str2;
	
	
	cout << result << endl;
	*/

	//Указатели на функции:

	/*
						//ФУНКЦИИ:


string GetDataFromBD()		//Приставка Get, говорит о том, что функция что-то получает и возвращает результат;
{
	return "Data From BD";
}

string GetDataFromWebServer()
{
	return "Data From Web Server";
}


void ShowInfo(string(*foo)())		//Функция, которая локально создает указатель на функцию с типом данных string;
{
	cout << foo() << endl;			//Обращаемся к указателю и выводим значение функции на который он указывает;
}


int main()

{
	ShowInfo(GetDataFromBD);	 //Вызываем функцию, которая выводит данные другой функции, с помощью указателя;
}
	*/

	int a;
	cin >> a;


	a < 10 ? cout << "a < 10" << endl : cout << "a >= 10" << endl;








	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
}
