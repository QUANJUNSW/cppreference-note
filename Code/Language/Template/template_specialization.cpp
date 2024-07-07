#include <iostream>

using namespace std;

template<typename T>
class Test;

template<>
class Test<int>
{
public:
    void fun()
    {
        cout << "int" << endl;
    }
};

template<>
class Test<double>
{
public:
    void fun()
    {
        cout << "double" << endl;
    }
};

class String
{
};

template<class T>
class Array
{ /*...*/
};

template<class T>// 主模板
void sort(Array<T> &v)
{ /*...*/
}

template<>// 错误：sort(Array<String>) 的显式特化在隐式实例化之后出现
void sort<String>(Array<String> &v)
{
}

void f(Array<String> &v)
{
    sort(v);// 使用 sort() 的主模板隐式实例化 sort(Array<String>&)
}

// template<>// 错误：sort(Array<String>) 的显式特化在隐式实例化之后出现
// void sort<String>(Array<String> &v)
// {
// }


int main()
{
    Test<int> t0;
    t0.fun();
    Test<double> t1;
    t1.fun();

    Array<String> as;
    f(as);
}