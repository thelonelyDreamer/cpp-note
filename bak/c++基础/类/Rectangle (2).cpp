#include<iostream>

using namespace std;

class Rectangle{
	private:
		float length;
		float width;
	public:
		Rectangle(float length,float width){
			this->length=length;
			this->width=width;
		}
		~Rectangle(){
			
		}
		
		float getArea(){
			return this->length*this->width;
		}
};

int main(void){
	float length,width;
	cout<<"��������εĳ��ȣ�";
	cin>>length;
	cout<<"��������εĿ�ȣ�";
	cin>>width; 
	Rectangle retangle(length,width);
	cout<<"���Ϊ��"<<retangle.getArea()<<endl;
	
	getchar();
	return 0; 
}
