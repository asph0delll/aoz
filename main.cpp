#include<iostream>
using namespace std;




		long long pows(long long num, int degree)
	{
		static int number_of_calls = 0;
		number_of_calls++;
		cout << "Функция была вызвана " << number_of_calls << " раз\n";
		if (degree == 0) return 1;
		return num * pows(num, degree - 1);
	}

	int main()
	{
		setlocale(LC_ALL, "Russian");
		int num, degree;
		cout << "Введите число: ";
		cin >> num;
		cout << "Введите степень: ";
		cin >> degree;
		cout << "Ответ:" << pows(num, degree);
	}