#include<iostream>
using namespace std;
bool isPalindrome(int n)
{
    int digit =0;
    int dup=n;
    if(dup<10)
    {
        return false;
    }
    else
    {
         while(n>0)
       {
        digit=digit*10+n%10;
        n=n/10;
        }
      if(digit==dup)
      {
        return true ;
      }

    }
   
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"the given number is palindrome or not :"<<isPalindrome(n)<<endl;
    return 0;
}