#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main() 
{
	int a,b,c;
	cout<<"Podaj wwysokosc trojkata"<<endl;
	cin>>a;
	cout<<"Podaj szerokosc trojkata"<<endl;
	cin>>b;
	c=b-1; //zmienna pomocnicza
	for(int i=0; i<a;i++)
	{
		for(int j=c;j<b;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		c--;
		
		
	}
	return 0;
}
