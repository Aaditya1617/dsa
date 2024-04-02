#include<iostream>
#include<vector>
using namespace std;
void printDivisors(int n)
{
    vector<int> ls;
    for(int i=1;i<=sqrt(n);i++)             // instead of writing i<sqrt(n) we should use i*i<=n
    {
        if(n%i==0)
        {
            ls.push_back(i);
            if((n/i)!=i)
            {
                ls.push_back(n/i);
            }
        }
    }
    sort((ls.begin()),(ls.end()));
    for(auto it:ls)
    cout<<it<<" ";
}
int main()
{
    int n;
    cout<<"enter the number:"<<endl;
    cin>>n;
    cout<<"the divisors are :"<<endl;
    printDivisors(n);
    return 0;
}