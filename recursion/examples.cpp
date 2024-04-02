#include<iostream>
using namespace std;
void countRecursion( int i,int n )
{
    if(i>n)
    {
        return;                                     // this one is by using recursion
    }
    cout<<i<<endl;
    countRecursion( i+1,n);
}
void inverseCountRecursion( int i,int n )
{
    if(i<1)
    {
        return;                                     // this one is by using recursion
    }
    cout<<i<<endl;
    inverseCountRecursion( i-1,n);
}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<" the output is"<<endl;
    cout<<" this one is from recursive function:"<<endl;
    countRecursion( 1, n);
    cout<<"the reverse count is"<<endl;
    inverseCountRecursion( n,n);
    return 0;
}