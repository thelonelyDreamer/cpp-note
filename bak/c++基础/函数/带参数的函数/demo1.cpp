#include<iostream>

using namespace std;
//��Ĭ��ֵ�ò������������ 
int add(int x ,int y=4, int z=3);
int main(){
	cout<<add(4)<<endl; 
	cout<<add(4,2)<<endl;
	cout<<add(3,2,1)<<endl;
	return 0;
} 

// ����ͬ���������ڣ���������ͬһ�������� ��������жԲ�����Ĭ��ֵ�ظ�����
// һ��������ע�� 
int add (int x , int y /*=4*/,int z /*=3*/){
	return x+y+z;
}
