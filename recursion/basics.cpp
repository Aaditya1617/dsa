/*
 when a function calls itself until a specific condition is met
 infinite recursion = stack overflow
 base condition = condition at which recursion stops
 recursion tree concept
*/ 
#include<iostream>
using namespace std;
void name(int n)
{
    int count = 1;
    while(count<=n)                                 // this one is by using functions
    {
        cout<<"king"<<endl;
        count++;
    }
    
}

void nameRecursion( int i,int n )
{
    if(i>n)
    {
        return;                                     // this one is by using recursion
    }
    cout<<"king"<<endl;
    nameRecursion( i+1,n);
}
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<" the output is"<<endl;
    name( n );
    cout<<" this one is from recursive function:"<<endl;
    nameRecursion( 1, n);
    return 0;
}