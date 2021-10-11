/* Напишите функцию, которая моделирует бросание двух игральных кубиков
(на каждом может выпасть от 1 до 6 очков). 
(Используйте генератор псевдослучайных чисел.)*/
#include <iostream>
#include <ctime>
using namespace std;

int toss() {
	return rand() % 6 + 1;
}

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RU");
	cout << "Кубик 1: " << toss() << " Кубик 2: " << toss();
}
