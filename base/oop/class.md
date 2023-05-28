### 1. 类的成员变量与静态成员变量

```cpp
class A{
    public:
        static int x;
        int y;
};
// 类的静态变量必须在类外赋值，编译时分配内存的，从程序开始到结束都存在
int A::x=2;
```