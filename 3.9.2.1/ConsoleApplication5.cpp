// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stack>

using namespace std;


class MyStack {
public:
    string name;
    int size;
    stack<int> stack;

    MyStack(int size, string name) {
        this->size = size;
        this->name = name;
    }

    bool push(int a) {
        if (stack.size() < size) {
            this->stack.push(a);
            return true;
        }
        else {
            return false;
        }
    }

    int peek() {
        if (!stack.empty()) {
            int a = this->stack.top();
            stack.pop();
            return a;
        }
    }

    bool canPeek() {
        if (!stack.empty()) {
            return true;
        }
        return false;
    }
    
};
int main()
{
    string name;
    int size;
    cin >> name >> size;
    MyStack* a1 = new MyStack(size, name);
    cin >> name >> size;
    MyStack* a2 = new MyStack(size, name);
    int a;
    bool flag = true;
    bool flag1, flag2;
    while (flag) {
        cin >> a;
        flag1 = a1->push(a);
        flag2 = a2->push(a);
        flag = flag1 && flag2;
    }
    cout << a1->name << " " << a1->size << endl;
    cout << a2->name << " " << a2->size << endl;
    cout.setf(ios::left);
    cout.width(15);
    cout << a1->name << endl;
    cout.setf(ios::left);
    cout.width(15);
    cout << a2->name << endl;
    while (a1->canPeek() && a2->canPeek()) {
        cout.setf(ios::right);
        int poof = a1->peek();
        cout.width(15);
        cout << poof;
        poof = a1->peek();
        cout.width(15);
        cout << poof;
        if (a1->canPeek() && a2->canPeek()) {
            cout << '\n';
        }
    }
}

