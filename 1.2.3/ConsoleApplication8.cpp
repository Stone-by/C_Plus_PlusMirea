// ConsoleApplication8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Point {
public:
    int n;
    int num=0;
    Point(int n) {
        this->n = n;
    }
    void work1() {
        cout << n << endl;
    }
    void work2() {
        while (n != 0) {
            num++;
            n /= 10;
        }
        if (num == 0) {
            num = 1;
        }
        cout << num << endl;
    }
};
int main()
{
    int n; cin >> n;
    Point a1(n);
    a1.work1();
    a1.work2();
}

