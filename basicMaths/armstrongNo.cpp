#include<iostream>
using namespace std;
bool armstrongNumber(int n)
{
    int digit=0;
    int dup=n;
    int sum=0;
    while(n>0)
    {
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;
    }
    if(sum==dup || dup==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    cout<<"is the given number armstrong number or not :"<<armstrongNumber(n)<<endl;
    return 0;
}