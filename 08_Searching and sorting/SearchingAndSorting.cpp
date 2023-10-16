#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    //Agar yaha tak pohoch ho matlab element nahi mila tummhe
    return -1;
}

int findFirstOccurence(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]==target)
        {
            ans=mid;
            end=mid-1;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int findLastOccurence(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]==target)
        {
            ans=mid;
            end=mid+1;
        }
        else if(target>arr[mid])
        {
            start=mid+1;
        }
        else if(target<arr[mid])
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return ans;
}

int main()

{
    // int arr[]={10,20,30,40,50,60,70,80,90};
    // int target=90;
    // int n=9;
    // int ansIndex=binarySearch(arr,n,target);
    // if(ansIndex==-1)
    // {
    //     cout<<"Element not found";
    // }
    // else{
    //     cout<<"element found at index: "<<ansIndex;
    // }
    int arr[]={10,20,30,30};
    int n=4;
    int target=30;
    // int ans=findFirstOccurence(arr,n,target);
    // int ansLast=findLastOccurence(arr,n,target);
    // cout<<"First occurence of "<<target<<" is at index : "<<ans<<endl;
    // cout<<"Last occurence of "<<target<<" is at index : "<<ansLast<<endl;
return 0;
}