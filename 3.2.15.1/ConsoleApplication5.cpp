// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>

using namespace std;


class One {
public:
    int a;
    One(int a) {
        this->a = a;
    }
};
class Two {
public:
    int b, c;
    void Setter(int b, int c) {
        this->b = b;
        this->c = c;
    }
};

void max(One a1, Two a2) {
    cout << max(max(a2.b, a2.c), a1.a);
}
int main()
{
    int a, b, c;
    cin >> a;
    One a1(a);
    cin >> b >> c;
    Two a2;
    a2.Setter(b, c);
    max(a1,a2);
}

