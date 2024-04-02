/*
brute approach
 no duplicates => unique elements => sets

 set<int> st;
 for(int i=0;i<n;i++)
 {                                          
    st.insert(arr[i]);                              T.C = nlogn  S.C =n 
 }
 index = o;
 for(auto it:st)
 {
    arr[index]=it;                                  T.C = n
    index++;
 }
 Overall T.C= nlogn + n



*/

// Two Pointer Approach => Optimal Approach
#include<iostream>
using namespace std;
int removeDuplicates ( int arr[], int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[i]!= arr[j] ){
             arr[i+1]=arr[j];
             i++;
        }
    }
    return i+1;
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
    result= removeDuplicates(arr,n);
    cout<<"The length of new array :"<<result<<endl;
    return 0;
}








