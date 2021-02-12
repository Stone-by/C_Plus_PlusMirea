// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class arr {
public:
    int n = 0;
    int *mas;
    arr() {
        cin >> n;
        mas = new int[n];
        if (5 <= n && n <= 20) {
            for (int i = 0; i < n; i++) {
                mas[i] = i * i;
            }
        }
        else {
            cout << "Error! mas is not [5,20]!" << endl;
        }
    }
    void print() {
        for (int i = 0; i < n; i++) {
            cout << mas[n - i - 1] << " ";
        }
    }
};
int main()
{
    arr *a1 = new arr();
    a1->print();
    delete a1;
}

