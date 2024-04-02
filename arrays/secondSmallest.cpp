/*
 the brute and better approaches will be same as second smallest one
 brute => nlogn + n
 better =2n
 bs inequalities badalni h purane code me
*/
// so ab yha pe optimal code hi likh rha hu m .
#include<iostream>
#include<climits>
using namespace std;
int secondsmallestElement( int arr[] ,int n)
{
    int smallest = arr[0];
    int secondsmallest = INT_MAX ;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            secondsmallest= smallest;
            smallest=arr[i];
        }
        else if(arr[i]>smallest && arr[i]<secondsmallest)
        {
            secondsmallest=arr[i];
        }
    }
    return secondsmallest;
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
    result= secondsmallestElement(arr,n);
    cout<<"the Second smallest element is :"<<result<<endl;
    return 0;
}
