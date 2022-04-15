#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin>>t;
	while(t--)
	{
	    int X,Y;
	    cin>>X>>Y;
	   int  Z=30*Y;
	    if(X>=Z)
	    {
	        cout<<"YES"<<"\n";
	    }
	    else
	    {
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
