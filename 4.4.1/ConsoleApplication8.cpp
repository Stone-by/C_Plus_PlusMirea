// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Base {
public:
	int n;
	int* arr;
	void init() {
		cin >> n;
		arr = new int[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
	}
};
class First : virtual public Base {
public:
	int minimum() {
		int min = arr[0];
		for (int i = 1; i < n; i++) {
			min -= arr[i];
		}
		return min;
	}
};
class Second : virtual public First {
public:
	int sum() {
		int max = 0;
		for (int i = 0; i < n; i++) {
			max += arr[i];
		}
		return max;
	}
};
class Third : virtual public Second {
public:
	void printThis() {
		init();
		cout << "Array dimension: " << n << '\n' << "The originalarray:";
			printArray();
		cout << '\n' << "Min: " << minimum() << '\n' << "Sum: " <<
			sum();
	}
private:
	void printArray() {
		for (int i = 0; i < n; i++) {
			cout.width(5);
			cout << arr[i];
		}
	}
};
int main() {
	Third* third = new Third();
	third->printThis();
}