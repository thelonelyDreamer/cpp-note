#include<iostream>
#include<bitset>

union one4all{
	int int_val;
	long long_val;
	double double_val;
};

int main(){
	
	//������ĳ�����������Ա�����ĳ��� 
	std::cout<<sizeof(int)<<std::endl;
	std::cout<<sizeof(long)<<std::endl;
	std::cout<<sizeof(double)<<std::endl;
	std::cout<<sizeof(one4all)<<std::endl;
	
	one4all example;
	example.double_val=-5.0;
	std::cout<<example.double_val<<std::endl; 
	std::cout<<example.long_val<<std::endl; 
	std::cout<<example.int_val<<std::endl; 
	
	return 0;
} 
