// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;
class base
{
public:
	int* arr, n;
};
class base1 : virtual public base
{
public:
	void getSize(int x)
	{
		this->n = x;
		arr = new int[n];
	}
};
class base2 : virtual public base
{
public:
	void getOrder()
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					int t = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = t;
				}
			}
		}
	}
	void getArray()
	{
		for (int i = 0; i < n; i++)
		{
			cout.width(5);
			cout << arr[i];
		}
	}
};
class base3 : public base1, public base2
{
public:
	void getNum()
	{
		for (int i = 0; i < n; i++)
			cin >> arr[i];
	}
	void algoritm(base3 s)
	{
		s.getNum();
		cout << "Array dimension: " << n << endl;
		cout << "The original array:";
		s.getArray();
		cout << endl << "An ordered array:";
		s.getOrder();
		s.getArray();
	}
};
int main()
{
	base3 cl;
	int N;
	cin >> N;
	cl.getSize(N);
	cl.algoritm(cl);
	return(0);
}