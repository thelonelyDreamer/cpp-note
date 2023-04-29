### 1. 整数

#### 1.1 输出

##### 1.1.1 

```c++

```



#### 1.2 输入



### 2. 浮点数

#### 1. 四舍五入

```c++
float a = 12.3456;

// 方案一
#include<cmath>
//基本函数调用
cout<<ceil(a)<<endl;   //向上取整
cout<<floor(a)<<endl;   //向下取整
cout<<round(a)<<endl;   //四舍五入

// 方案二
//向下取整
#define ceil(a) ((a)>=0?((int)a):((int a)-1))
//向上取整
#define floor(a) ((a>(int)a?(int)a+1:(int)a))
//四舍五入
cout<<(int)(a+0.5)<<endl;
```

