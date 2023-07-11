#include <iostream>		//директива include подключает библиотеку iostream
using namespace std;	//пространство имен, для сокращения кода

int main()
{
	//Стандартный код приветствия на русском языке.
	setlocale(LC_ALL, "Rus");
	cout << "Привет епта!" << endl;
}