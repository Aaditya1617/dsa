#include<iostream>
using namespace std;
int noOfDigits(int n)
{
    int count =0;
    while(n>0)
    {                                   // Method One               T.C =log n  where base is 10
        n=n/10;
        count++;
    }
    return count;

}
int noOfDigits2(int n)
{
    int cnt = (int)(log10(n)+1);        //  Logarithmic Method
    return cnt;
}
int reverse(int n)
{
    int digit =0;
    while(n>0)
    {
        digit=digit*10+n%10;
        n=n/10;
    }
    return digit;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"the number of digits is :"<<noOfDigits(n)<<endl;
    cout<<"the result from logarithmic method is :"<<noOfDigits2(n)<<endl;
    cout<<"the reverse of given number is :"<<reverse(n)<<endl;
    return 0;
}
