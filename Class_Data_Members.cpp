#include <iostream>
using namespace std;
class Person
{
	public:
		string name;
		int age;
		Person()
		{
		string N=name;
		int A=age;	
		}
		void displayInfo()
		{
			cout<<"Name is:"<<name<<endl;
			cout<<"Age is:"<<age;
		}
};
int main() //main part of the program
{
	Person person1;
	person1.name="Anita";
	person1.age=30;
	person1.displayInfo();
}
