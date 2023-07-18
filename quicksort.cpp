#include<bits/stdc++.h>
using namespace std;

//function to swap two elements
void swap(int *a,int *b){

    int t=*a;
    *a=*b;
    *b=t;
}
// function to print the array
void printArray(int array[], int size) {
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int partition(int arr[],int low,int high){

    //select rightmost as pivot

    int pivot=arr[high];
    //pointer for greater element 
    int i=(low-1);

    //traverse each element of array and compare with pivot

    for (int j=low;j<high;j++){

        if(arr[j]<=pivot){

            i++;
            //swap element at i with element at j

            swap(&arr[i],&arr[j]);
        }
    }

    //swap pivot with greater element at i
    swap(&arr[i+1],&arr[high]);

    //return partition point

    return (i+1);
}


//quicksort function
void quicksort(int arr[],int low,int high){

    if(low<high){//condition to hold

        int pi=partition(arr,low,high);//find pivot point

        quicksort(arr,low,pi-1);//run quicksort on left subarray
        quicksort(arr,pi+1,high);//run quicksort on right subarray
    }
}
//driver code
int main() {
     cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    int arr[n];
    //take array input
    for(int i=0;i<n;i++)
    cin>>arr[i];
 
  //print unsorted array
  cout << "Unsorted Array: \n";
  printArray(arr, n);
  
  // perform quicksort on data
  quicksort(arr, 0, n - 1);
  //print sorted array
  cout << "Sorted array in ascending order: \n";
  printArray(arr, n);
  return 0;
}

//Time Complexities:

//Best  and Average Case: O(n*log n)
//Worst Case:O(n^2)

//Space Complexity: O(log n)