#include <iostream>
using namespace std;

int numbers(int a, int b, int c) 
{
  return a,b,c;
}
double decimals(double a, double b, double c )
{
	return a,b,c;
}
string names(string a, string b, string c)
{
  return a,b,c;
}


int main() 
{
  int numbers=numbers;
  string names=names;
  cout<<"The numbers are:"<<numbers<<endl;
  cout<<"The decimals:"<<decimals<<endl;
  cout<<"The names are:"<<names;
  return 0;
}
