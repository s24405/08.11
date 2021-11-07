
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main() 
{
	int a,b;
	cout<<"Podaj wysokosc trojkata"<<endl;
	cin>>a;
	cout<<"Podaj szerokosc trojkata"<<endl;
	cin>>b;
	for(int i=0; i<a;i++)
	{
		for(int j=b;j>0;j--)
		{
			cout<<"*";
		}
		cout<<endl;
		b=b-1;
		
	}
	return 0;
}
