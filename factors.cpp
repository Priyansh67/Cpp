# include<iostream>
using namespace std;
    
int main()
{
	int i,n;
	cout<<"Enter the number\n";
    cin>>n;
    cout<<"Factors are :-\n";
	for(i=1;i<=n;i++)
	{
	     if(n%i==0)
	     {
		     cout<<i<<endl;
	     }
	}
	return 0;
}
