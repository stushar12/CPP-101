#include<iostream>
using namespace std;
int main()
 {
int p;
cin>>p;
while(p--)
{
    int n,k;
    cin>>n>>k;
    if(((n>>(k-1))&1)==1)				//Right shift operation
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}
}