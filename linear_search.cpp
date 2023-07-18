#include<bits/stdc++.h>
using namespace std;

//linear search function
int linear_search(int arr[],int n,int key){
    //iterate over array elements 
    for(int i=0;i<n;i++){
        //check if key is present 
        if(arr[i]==key)
        return i;
    }
    //return -1 if key is not present 
    return -1;
}

int main(){

    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    int arr[n];
    //Take array elements
    for(int i=0;i<n;i++)
    cin>>arr[i];
int key;
cout<<"Enter element to search :"<<endl;
cin>>key;
//call linear_search function 
    int result=linear_search(arr,n,key);
//display output 
    (result==-1)?cout<<"Element not present":cout<<"Element present at position :"<<result<<endl;
    return 0;
}


//Time Complexity : O(n)

//Space Complexity : O(1)


