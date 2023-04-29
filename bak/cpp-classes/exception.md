### 1. module

#### 1.1 MyException

```c++
class MyException{
public:
    MyException(const string &message):message(message){}
    ~MyException(){}
    const string &getMessage() const{return message;}
private:
    string message;
}
class Demo{
public:
    Demo(){}
    ~Demo(){}
    void func() throw(MyException){
        throw MyException("223");
    }
}
```

