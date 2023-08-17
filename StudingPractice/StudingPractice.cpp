﻿#include <iostream>		//директива include подключает библиотеку iostream
#include <ctime>		//Подключаем библиотеку с помощью которой можно вызывать функцию time
#include <string>		//Библиотека позволяющая работать с классом string (строки)
#define PI 3.14			//Определили константу PI
#include <vector>		//Добавляем библиотеку vector, динамический контейнер

using namespace std;	//пространство имен, для сокращения кода




					//ООП

//Что такое ООП:

/*
- Инкапсуляция - механизм языка C++, ограничивающий доступ к составляющим объект компонентам 
				(методам и атрибутам), делает их защищенными или приватными, то есть доступными 
				только внутри объекта.

- Наследование - это способ организовывать иерархии классов. При этом класс-наследник приобретает поля и 
				функции базового класса, модифицируя их область видимости.

- Полиморфизм - это свойство программного кода изменять свое поведение в зависимости от ситуации, 
				возникающей при выполнении программы. 

*/

//Классы:

/*
- Класс это пользовательский тип данных т.е это тип данных, которую я создал сам
- Класс создается перед функцией main();

	class Human				//создали класс (class название_класса)
	{
	public:					//Определяем модицикатор доступа (обязательно)
							//Между фигурных скобок тело (параметры) класса

	int age;
	string name;


	};						//После завершения класса, необходимо ставить ';'

	int main()----------------------------------------------------------------------

	Human firstMan;			//Создаем объект класса (Переменную нашего типа данных)

							//Присваиваем значения свойств age int, объекта firstMan из класса Human;
	firstMan.age = 24;
	firstMan.name = "Innokentiy YouNona Pridiskishkiii";

	cout << firstMan.age << endl;
	cout << firstMan.name << endl;
====================================================================================
МЕТОДЫ И ФУНКЦИИ КЛАССА:

- Методы и функции класса представляют из себя одно и тоже;
- Функция класса определяется внутри тела класса;
- Функция внутри класса может взаимодействовать с переменными внутри того же класса

	class Human
	{
	public:

	int age;
	char name;
	int weight;

	void Print()				//Определяем функцию в классе
	{
		cout << name << endl;		
	}
	
	
	};

	int main()
	{

	firstMan.Print();		//Вызов функции для конкретного объекта в классе 

	}
*/

//Модификаторы доступа:

/*
- Мы можем использовать 3 вида модификаторов доступа в ООП. 
- private, public, protected

class Point
{
public:				- полный доступ к полям класса, через его бъект (т.е через точку)
	int x;
	int y;

private:			- без доступа через объект
	int z;

protected:			- Доступно для наследования другим классом
};

- В данном случае переменные x и y, будут иметь модификатор доступа public, а z будет private


*/

//Геттеры и сеттеры класса. Get, Set. Инкапсуляция:

/*
- По принципу инкапсуляции, оставлять данные класса публичными, запрещено. Т.е модификатор доступа public:
- Взаимодействовать с полями класса принято через геттеры и сеттеры
- Геттеры (Get) отвечают за получение инофрмации. 
  Сеттеры (Set) отвечают за установку, например присвоить значение переменной
- Геттеры и сеттеры являются методами (функциями) класса и должны быть в Public методе
	
	class Point
	{
	private:
		int x;
		int y;

	public:

		int GetX()			//Геттер должен возвращать значение, поэтому он не может быть void
		{
			return x;
		}

		void SetX(int valueX)		//Так как Сеттер принимает данные, он может быть void, но обязательно должен принимать аргумент
		{
			x = valueX;				//Присваиваем значение которое принимаем переменной в классе;
		}
	};


*/




						//STL

//VECTOR:

/*
- Вектор это тот же динамический массив, только с более широким функционалом;
- Вектор необходимо подключать через директиву #include
	#include <vector>

- Вектор создается в теле программы, и имеет такой вид: vector <тип_данных> название
	vector <int> myVector;

- Так как вектор является классом, они имеет множество методов, и их можно вызвать с помощью точки
	myVector.push_back(2);		//Добавляем в конец вектора элемент со значением 2

- Обращаться к элементам вектора осуществляется так же как и с обычным массивом []
- Количество элементов в векторе хранит метод .size()
	for (int i = 0;i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

- Так же к элемментам вектора можно обратиться с помощью метода at()
- Разница между at() и [], в том что at() проверяет границы вектора, и не может обращаться к другой области памяти
- Но он является медленнее []
	myVector.at(2) = 4;		//обращаемся к элементу под индексом 2 и присваиваем ей значение 4

- Метод .clear() убирает все элементы в векторе
- Метод .pop_back удаляет последний элемент
- Метод .capacity() проверяет заразервированное место в векторе
- Метод .reserve() меняет количество capacity()
- Метод .shrink_to_fit() удаляет зарезервированное место и оставляет только количество size()
- Метод .insert() добавляет элемент в любое место под лбой индекс
- Метод .erase() удаляет элемент под любым индексом

*/








					//ФУНКЦИИ и КЛАССЫ:

class Human				//создали класс (class название_класса)
{
public:					//Определяем модицикатор доступа (обязательно)
	int age;
	string name;		//Определяем свойства класса
	int weight;

	void Print()		//Прописываем функцию внутри класса
	{
		cout << "Имя: " << name << "\nВес: " << weight << "\nВозраст: " << age << endl << endl;
	}


};

class Point
{
private:
	int x;
	int y;

public:

	int GetX()			//Геттер должен возвращать значение, поэтому он не может быть void
	{
		return x;
	}

	void SetX(int valueX)		//Так как Сеттер принимает данные, он может быть void, но обязательно должен принимать аргумент
	{
		x = valueX;				//Присваиваем значение которое принимаем переменной в классе;
	}

	void SetY(int valueY)		
	{
		y = valueY;	
	}

	void Print()
	{
		cout << "X = " << x << "\nY = " << y << endl << endl;
	}
};

class CoffeeGrinder 
{
private:
	bool CheckVoltage() {
		return true;
	}

public:
	void Start()
	{

		if (CheckVoltage()) {
			cout << "VZHHHHuuuh" << endl;
		}
		else {
			cout << "Beep Beep" << endl;
		}
	}
};






int main ()
{

	setlocale(LC_ALL, "Rus");

	

	//Инкапсуляция:

	/*
							//ФУНКЦИИ и КЛАССЫ:
class CoffeeGrinder
{
private:
	bool CheckVoltage() {
		return true;
	}

public:
	void Start()
	{

		if (CheckVoltage()) {
			cout << "VZHHHHuuuh" << endl;
		}
		else {
			cout << "Beep Beep" << endl;
		}
	}
};

int main ()
{
	heehee.Start();
}

	*/

	
	//VECTOR:

	/*
	
	
	
	*/


	vector <int> myVector = {10, 12, 12, 13};
	myVector.reserve(22);
	myVector.push_back(71);
	myVector.push_back(61);
	myVector.push_back(8);
	myVector.push_back(99);

	cout << "Количество элементов в векторе: " << myVector.size() << endl;
	cout << "apacity(): " << myVector.capacity() << endl;


	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}


	system("pause");	//Функция для того, чтобы консоль сразу не закрывалась вне Visual Studio
	return 0;			//По  стандарту: Функция main() должна быть int и возвращать 0
}

