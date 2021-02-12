// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Callcul {
public:
    int sum = 0;
    int a, b;
    char oper;
    Callcul(int a, char oper, int b) {
        this->a = a;
        this->b = b;
        this->oper = oper;
        switch (oper)
        {
        case '+':
        {
            sum = a + b;
            break;
        }
        case '-':
        {
            sum = a - b;
            break;
        }
        case '*':
        {
            sum = a * b;
            break;
        }
        case '%':
        {
            sum = a % b;
            break;
        }
        default:
            break;
        }
        cout << sum << endl;
    }
    void Again() {
        char sim;
        do{
            cin >> sim;
            switch (sim)
            {
            case '+':
            {
                cin >> b;
                sum += b;
                break;
            }
            case '-':
            {
                cin >> b;
                sum -= b;
                break;
            }
            case '*':
            {
                cin >> b;
                sum *= b;
                break;
            }
            case '%':
            {
                cin >> b;
                sum %= b;
                break;
            }
            default:
                break;
            }
            cout << sum << endl;
        } while (sim != 'C');
    }
};
int main()
{
    int a, b;
    char oper;
    cin >> a >> oper >> b;
    Callcul a1(a, oper, b);
    a1.Again();
    return 0;
}

