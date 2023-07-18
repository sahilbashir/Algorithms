#include<bits/stdc++.h>
using namespace std;

//binary search function
int binary_search(int arr[],int key,int low,int high){

    //condition to hold
    while(low<=high){

        //find mid element
    int mid=(low+high)/2;

    //key found condition 
    if(arr[mid]==key)
    return mid;
    //key greater than mid 
    if(arr[mid]<key)
    low=mid+1;
    //key less than mid
    else
    high=mid-1;


    }
    //key not present
    return -1;
}

int main(){

    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    int arr[n];
    //Take array input
    for(int i=0;i<n;i++)
    cin>>arr[i];
int key;
cout<<"Enter element to search :"<<endl;
cin>>key;
//call the binary_search function
    int result=binary_search(arr,key,0,n-1);
//display the output
    (result==-1)?cout<<"Element not present":cout<<"Element present at position :"<<result<<endl;
    return 0;
}


//Time Complexities:
//Best Case:O(1)
//Average and Worst Case:O(log n)

//Space Complexity:O(1)