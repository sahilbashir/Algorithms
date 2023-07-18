// Selection sort in C++

#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}
//selection_sort function
void selectionSort(int array[], int size) {
    //loop to iterate over all elements
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;//select first element as minimum index
    //loop to compare two elements
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}

// Driver program
int main() {
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter Elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
 //print unsorted array
cout << "Unsorted Array: \n";
  printArray(arr, n);
  //perform selection sort
  selectionSort(arr, n);
//print sorted array
  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}

//Time Complexity(Best,Worst,Average):O(n^2)
//Space Complexity:O(1)