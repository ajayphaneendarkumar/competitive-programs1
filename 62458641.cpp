#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x,y;
	    cin>>x>>y>>a>>b;
	    if((a*b)>=(x*y))
	    {
	        cout<<"Yes"<<"\n";
	    }
	    else
	    {
	        cout<<"No"<<"\n";
	    }
	}
	return 0;
}
