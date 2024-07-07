#include <iostream>

using namespace std;

int put_a()
{
    cout.put('a');

    return 1;
}

int put_b()
{
    cout.put('b');

    return 2;
}

int pub_c()
{
    cout.put('c');

    return 3;
}

void fun(int, int, int)
{
}

int main()
{
    fun(put_a(), put_b(), pub_c());

    return (put_a() + put_b() + pub_c());
}