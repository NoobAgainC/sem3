//This and only this program is copied from geeksforgeeks.

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        } 
    }
}

void selectionSort(int arr[], int n) {
 
    // One by one move boundary of
    // unsorted subarray
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx]) min_idx = j;

        if(min_idx!=i) swap(arr[min_idx], arr[i]);
    }
}

void insertionSort(int arr[], int n)
{
    int j;
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high)
{
 
    // First element as pivot
    int pivot = arr[low];
    int st = low; // st points to the starting of array
    int end = high; // end points to the ending of the array
    int k = high;
    for (int i = high; i > low; i--) {
        if (arr[i] > pivot)
            swap(arr[i], arr[k--]);
    }
    swap(arr[low], arr[k]);
    // As we got pivot element index is end
    // now pivot element is at its sorted position
    // return pivot element index (end)
    return k;
}
 
/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
    // If low is lesser than high
    if (low < high) {
        // idx is index of pivot element which is at its
        // sorted position
        int idx = partition(arr, low, high);
 
        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, idx - 1);
        quickSort(arr, idx + 1, high);
    }
}

void print(int arr[], int size)
{
    cout << "Following are elements of sorted Array:" << endl;

    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;
}

int main() {
    int arr[] = {6, 3, 7, 9, 0};
    selectionSort(arr, 5);
    print(arr, 5);
}