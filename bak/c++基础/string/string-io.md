### 1. 用 getline 输入字符串

```cpp
#include<iostream>
#include<string>

using namespace std;

int main(int argc,char* argv){
    for(int i=0;i<2;i++){
        string city,state;
        getline(cin,city,',');
        getline(cin,state);
        cout<<"City:"<<city<<"\tState:"<<state;
    }
    return 0;
}

//运行结果
Beijing,China
City:Beijing    State:China
San Francisco,the United States
City:San Francisco State:the United States
```
