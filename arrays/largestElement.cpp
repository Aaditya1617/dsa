// brute approach => sort and print the index at last index  O(nlog n)
//optimal approach code below
#include<iostream>
using namespace std;
int largestElement( int arr[] ,int n)
{
    int largest = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    return largest;
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
    result= largestElement(arr,n);
    cout<<"the largest element is :"<<result<<endl;
    return 0;
}
