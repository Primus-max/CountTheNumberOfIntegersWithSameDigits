// Подсчитать количество целых чисел в диапазоне от 100
// до 999, у которых есть две одинаковые цифры.


#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int start = 100, end = 999, counter = 0;
	int store[3];

	for (int i = start; i <= end; i++)
	{
		int hundreds = i / 100;
		int tens = (i / 10) % 10;
		int units = i % 10;

		if ((units == tens && tens != hundreds) || (hundreds == tens && units != hundreds))
		{
			counter++;
			cout << i << endl;
		}
			
	}

	cout << "Всего количество целых чисел в диапазоне от 100 до 999, у которых есть две одинаковые цифры " << counter;
}

//    
//



