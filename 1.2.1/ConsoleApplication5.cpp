// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>

using namespace std;

class Treygol 
{
public:
    int x;
    int y;
    int z;
    Treygol(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    int Per() {
        int per = x + y + z;
        return per;
    }
    int Plo() {
        int per = (double)((x + y + z)/2);
        return sqrt(per * (per - x) * (per - y) * (per - z));
    }
};

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    Treygol a1(x,y,z);
    cout << a1.Per() << endl;
    cout << a1.Plo() << endl;
}

