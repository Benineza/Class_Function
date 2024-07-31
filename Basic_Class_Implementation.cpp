#include <iostream>
using namespace std;

class Rectangle
{
	public:
		int width;
	    int height;
	    int area;
	    
		Rectangle()
		{
		int W=width;
		int H=height;
		int A=area;			
		}
		 void setDimensions()
		{
			cout<<"width:"<<width<<endl;
			cout<<"height:"<<height<<endl;
			cout<<"area:"<<area;
		}
};
int main() //main part of the program
{
	Rectangle rectangle1;
	rectangle1.width=10;
	rectangle1.height=15;
	rectangle1.area=10*15;
	rectangle1.setDimensions();
}
