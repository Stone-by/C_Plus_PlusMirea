// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

class Mas {
public:
    int max=0;
    int *array;

    Mas(int mas[], int n) {
        max = n;
        array = new int[max];
        int* p1 = mas;
        int* p2 = array;
        for (int i = 0; i < max; i++) {
            *(p2++) = *(p1++);
        }
    }
    
    void printReforse() {
        for (int i = 0; i < max; i++) {
            cout << array[max-i-1] << " ";
        }
    }
    void print() {
        for (int i = 0; i < max; i++) {
            cout << array[i] << " ";
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& it : v)
        cin >> it;
    int* mas = &v[0];
    Mas a1(mas, n);
    a1.print();
    cout << endl;
    a1.printReforse();
}

