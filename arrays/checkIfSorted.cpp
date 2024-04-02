#include<iostream>
using namespace std;
bool checkIfSorted( int arr [],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=arr[i+1])
            {

            }
        else {
            return false;
             }
        return true;
    }
}

int main()
{
    int arr[100];
    int n,result;
    cout<<"enter the array size"<<endl;
    cin>>n;
    cout<<"enter the array elements"<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    result= checkIfSorted(arr,n);
    cout<<"Is it Sorted :"<<result<<endl;
    return 0;
}