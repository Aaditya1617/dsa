// brute approach => first step is to sort 
/*
then check
for(i=n-2;i>=0;i--)
{
    if(arr[i]!=largest)
    {
        secondLargest=arr[i];
        break;
    }
    return secondLargest
}
arr[]={1 2 4 7 7 5 }
this on sorting will be 1 2 4 5 7 7 

this method will give complexity O((nlog n)+ n) //nlogn +n

*/
// better approach
/*
largest=arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i]
    }
}
sLaregest=-1;
for(int i=0;i<n;i++)
{
    if(arr[i]>sLargest && arr[i]!=largest)
    sLargest=arr[i];
}
Time Complexity =n+n =2n => O(2n) =>O(n).
*/

// The Optimal Solution

#include<iostream>
using namespace std;
int secondlargestElement( int arr[] ,int n)
{
    int largest = arr[0];
    int secondLargest = -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondLargest= largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i>secondLargest])
        {
            secondLargest=arr[i];
        }
    }
    return secondLargest;
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
    result= secondlargestElement(arr,n);
    cout<<"the Second Largest element is :"<<result<<endl;
    return 0;
}
