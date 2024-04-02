#include<iostream>
using namespace std;
bool isPrime(int n)
{
    int cnt=0;
    for(int i =1;i*i<=n ;i++)
    {
        if(n%i==0)
        {
            cnt++;
            if(n/i!=i)
            {
                cnt++;
            }
        }
    }
    if(cnt==2)
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
    int n, result;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<"output:"<<endl;
    result =isPrime(n);
    cout<<result<<endl;
    return 0;
}