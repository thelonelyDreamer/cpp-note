#include<iostream>
using namespace std;

int sumOfSquare(int a,int b){
	return a*a+b*b;
}

// ���ؿ����������������ͣ�������Ҫ��ͬ
// ϰ���Ͻ�������ͬ�������������أ�����������Ҫ���أ��������� 
double sumOfSquare(double a,double b){
	return a*a+b*b;
}

int main(){
	int m,n;
	cout<<"Enter two integer:"<<endl;
	cin>>m>>n;
	cout<<"Their sum of square: "<<sumOfSquare(m,n)<<endl;
	
	double x,y;
	cout<<"Enter two real numble:"<<endl;
	cin>>x>>y;
	cout<<"Their sum of square: "<<sumOfSquare(x,y)<<endl;
	
	return 0;
	
}
