// Insertion sort in C++

#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
//insertionSort function
void insertionSort(int array[], int size) {
    //loop to iterate over all array elements
  for (int step = 1; step < size; step++) {
    int key = array[step];//select arr[1] as key
    int j = step - 1;//j=0 i.e index of arr[0]

    // Compare key with each element on the left of it until an element smaller than
    // it is found.
    // For descending order, change key<array[j] to key>array[j].
    while (key < array[j] && j >= 0) {//insertion sort condition
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

// Driver program
int main() {
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    int arr[n];
    //take array elements
    for(int i=0;i<n;i++)
    cin>>arr[i];
 //print unsorted array
cout << "Unsorted Array: \n";
  printArray(arr, n);
  //perform insertion sort
  insertionSort(arr, n);
//print sorted array
  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}

//Time Complexity:
//Best Case:O(n)
//Average and Worst Case:O(n^2)

//Space Complexity:O(1)
