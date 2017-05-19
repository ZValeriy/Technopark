//Дано N кубиков.Требуется определить каким количеством способов
//можно выстроить из этих кубиков пирамиду.
//Формат входных данных :
//На вход подается количество кубиков N.
//Формат выходных данных :
//Вывести число различных пирамид из N кубиков.
//6_2. Широкая пирамида.​ Каждый вышележащий слой 
//пирамиды должен быть строго меньше
//нижележащего.
//N ≤ 300.

#include<iostream>
#include<cassert>

int Calculating(int numbers)
{
	int piramides = 0;                       //Количество пирамид
	int downrow = 0;                         //Количество кубиков в нижнем ряду
	if (numbers <= 2) return 1;             
	if (numbers % 2 == 0)
	{
		downrow = numbers / 2;
	}
	else downrow = numbers / 2 + 1;
	for (int i = 0; i < downrow; i++) {
		piramides+=Calculating(i);
	}
	return piramides;
}




int main()
{
	int N = 0;
	std::cin >> N;
	assert(N <= 300 && N > 0);

	int count = Calculating(N);
	std::cout << count;

	return 0;
}