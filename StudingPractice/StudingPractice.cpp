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



int main()
{
	setlocale(LC_ALL, "Rus");
	
	cout << "Привет епта!\n";
	cout << "wassap my nigga!\n\n";
	cout << "\tБЕЙБИ\t\t КАК\t\t У\t\t ТЕБЯ\t\t ДИЛАА\n";
	cout << "И сказала она: \"ебанутые люди сверху!\"\n";
	cout << "\n\t\t\tДЗ Урок #3.Стихотворение.\n";
	cout << "\n\t\t\tСпать пора, уснул бычок,\n\t\t\tЛег в коробку на бочок,\n";
	cout << "\t\t\tСонный мишка лег в кровать,\n\t\t\tТолько слон не хочет спать,\n ";
	cout << "\t\t\tГоловой кивает слон,\n\t\t\tОн слонихе шлет поклон.\n";

}