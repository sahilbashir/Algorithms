#include<bits/stdc++.h>
using namespace std;
//bubble sort function
void bubble_sort(int arr[],int size){

//loop to access each array elements
    for(int step=0;step<(size-1);++step){

int swapped=0;//check if swapping happens

//loop to compare two elements
        for(int i=0;i<(size-step-1);++i){

// compare two array elements
      // change > to < to sort in descending order
            if(arr[i]>arr[i+1]){

               //swapping 
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            swapped=1;
            }
        }
// no swapping means the array is already sorted
    // so no need of further comparison
        if(swapped==0){
            break;
        }
    }
}
//Driver Code
int main(){

    cout<<"Enter size of array"<<endl;
    int size;
    cin>>size;
    cout<<"Enter Elements"<<endl;
    int arr[size];
    //take array input
    for(int i=0;i<size;i++)
    cin>>arr[i];
//call function
    bubble_sort(arr,size);

    cout<<"sorted array"<<endl;
    //display sorted array
    for(int i=0;i<size;i++)
    cout<<arr[i];

    return 0;
}


//Time Complexities:

//Best Case:O(n)
//Average and Worst:O(n^2)

//Space Complexity:O(1)
