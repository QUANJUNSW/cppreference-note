# 显示模板特化

---

## 注意点

1. 对模板进行的显示特化，必须在非特化模板之后。
即必须先声明一个主模板（不必定义），才能对其进行特化。

2. 特化必须在导致隐式实例化的首次使用之前。
个人认为这可能是因为隐式实例化已经生成了相应的代码，后面再特化就相当于重复定义。

3. 只有声明没有定义的模板特化可以像其他不完整类型一样使用（例如可以使用到它的指针和引用）。
个人认为这相当于声明了一个对应的类或函数，就相当于一个简单模板标识一样）。

4. 函数模板和变量模板 (C++14 起)的显式特化是否为 inline/constexpr (C++11 起)/constinit/consteval (C++20 起) 只与显式特化自身有关，主模板的声明是否带有对应说明符对它没有影响。模板声明中出现的属性在它的显式特化中也没有效果： (C++11 起)。
个人的理解是显示特化后就已经是一个单独的类或函数等等，在具体的实现上已于源模板无关。

---