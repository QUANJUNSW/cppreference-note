#include <iostream>
#include <thread>

using namespace std;

// int a;
// a = 10;

void fun(int &)
{
    cout << "C++" << endl;
}

int main()
{
    int a = 10;
    thread t(fun, a);
}