// ConsoleApplication10.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Point {
public:
    Point() {
        cout << "1" << endl;
    }
    ~Point() {
        cout << "2" << endl;
    }
};
int main()
{
    Point a1;
}

