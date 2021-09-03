#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of elements "<<endl;
    cin>>n;
    int* a = new int[n];
    for(int i=0;i<n;i++)
    {
        a[i] = rand()%100;
    }
    cout<<"Even elements "<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 == 0)
            cout<<a[i]<<" ";
    }
    cout<<"Odd elements "<<endl;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2 != 0)
            cout<<a[i]<<" ";
    }
	return 0;
}
