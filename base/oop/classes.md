### circle
```cpp
class Circle{
public:
    Circle(float radius){
        this->radius=radius;
    }
    ~Circle(){}
    float getArea(){
        return 3.14*radius*radius;
    }
private:
    float radius;
};
```
### Clock
```cpp
class Clock{
public:
    Clock(int hour=0,int minute=0,int second=0);//构造函数
    void show_time()const;  // 显示时间
    Clock& operator++(); // 前置运算符
    Clock operator++(int);// 后置运算符
private:
    int hour,minute,second;
};

Clock::Clock(int hour/*=0*/,int minute/*=0*/,int second/*=0*/){
    if(hour<0||hour>23||minute<0||minute>59||second<0||second>59){
        cout<<"Time error"<<endl;
    }
    this->hour=hour;
    this->minute=minute;
    this->second=second;
}

void Clock::show_time()const{
    cout<<hour<<"："<<minute<<":"<<second<<endl;
}

Clock& Clock::operator++(){
    second++;
    if(second>59){
        second-=60;
        minute++;
    }
    if(minute>=60){
        minute-=60;
        hour=(hour+1)%24;
    }
    return *this;
}

Clock Clock::operator++(int){
    Clock old = *this;
    ++(*this);
    return old;
}
```
### DataType
```cpp
class DataType{
    enum{
        character,
        integer,
        floating_point
    }vartype;
    union{
        char c;
        int i;
        float f;
    };
    
    public:
        DataType(char ch){
            vartype=character;
            c=ch;
        }
        DataType(int ii){
            vartype=integer;
            i=ii;
        }
        DataType(float ff){
            vartype=floating_point;
            f=ff;
        }
        void print();
        
};

void DataType::print(){
    switch(vartype){
        case character:
            cout<<"字符型："<<c<<endl;
            break;
        case integer:
            cout<<"整型："<<i<<endl;
            break;
        case floating_point:
            cout<<"浮点型："<<f<<endl;
            break;
    }
}
```
### Tree
```cpp
class Tree{
    int ages; //树的年龄
public:
    // 构造与析构函数
    Tree(int n=0); 
    ~Tree();
    void grow(int years); //增加树龄
    void age(); // 显示树龄
};

Tree::Tree(int n){
    ages=n;
}
Tree::~Tree(){
    age();
}
void Tree::grow(int years){
    ages+=years;
}

void Tree::age(){
    cout<<"这棵树的树龄为："<<ages<<endl;
}

```