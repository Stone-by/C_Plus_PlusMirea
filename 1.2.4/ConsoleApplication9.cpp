// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int suma = 0;

class Calkulator {
public: 
    char oper1, oper2, oper3;
    int a, b, c, d;
    Calkulator(int a, char oper1, int b, char oper2, int c, char oper3, int d) {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->oper1 = oper1;
        this->oper2 = oper2;
        this->oper3 = oper3;
    }
    void work1() {
        switch (oper1)
        {
        case '+':
        {
            suma = a + b;
            break;
        }
        case '-':
        {
            suma = a - b;
            break;
        }
        case '*':
        {
            suma = a - b;
            break;
        }
        case '%':
        {
            suma = a - b;
            break;
        }
        default:
        {
            break;
        }
        }
        switch (oper2)
        {
        case '+':
        {
            suma += c;
            break;
        }
        case '-':
        {
            suma -= c;
            break;
        }
        case '*':
        {
            suma *= c;
            break;
        }
        case '%':
        {
            suma %= c;
            break;
        }
        default:
        {
            break;
        }
        }
        switch (oper3)
        {
        case '+':
        {
            suma += d;
            break;
        }
        case '-':
        {
            suma -= d;
            break;
        }
        case '*':
        {
            suma *= d;
            break;
        }
        case '%':
        {
            suma %= d;
            break;
        }
        default:
        {
            break;
        }
        }
        cout << suma << endl;
    }

};

int main()
{
    int a, b,c,d;
    char oper1, oper2, oper3;
    cin >> a >> oper1 >> b;
    cin >> oper2 >> c;
    cin >> oper3 >> d;
    Calkulator a1(a, oper1, b, oper2, c, oper3, d);
    a1.work1();
}

