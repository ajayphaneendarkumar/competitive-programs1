#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int X,Y;
	    cin>>X>>Y;
	    if(X<Y)
	    {
	        cout<<"FIRST"<<"\n";
	    }
	    else if(X>Y)
	    {
	        cout<<"SECOND"<<"\n";
	    }
	    else
	    {
	        cout<<"ANY"<<"\n";
	    }
	}
	return 0;
}
