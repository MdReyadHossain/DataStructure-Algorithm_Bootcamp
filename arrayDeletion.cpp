#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl;

void showArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    LOG("");
}

int main() {
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    LOG("Given array: ");
    showArr(arr, 8);
    int totalElement = 8;
    

    // delete an element at the END of the array 
    totalElement--;
    LOG("\nDeleted the LAST element: ");
    showArr(arr, totalElement);


    // delete the FIRST element of the array 
    totalElement--;
    int index = 0;
    for(int i = index; i < totalElement; i++) 
        arr[i] = arr[i+1];
        
    LOG("\nDeleted the FIRST element: ");
    showArr(arr, totalElement);

    
    // delete the MIDDLE(2) element of the array 
    totalElement--;
    index = 2;
    for(int i = index; i < totalElement; i++) 
        arr[i] = arr[i+1];

    LOG("\nDeleted the MIDDLE one: ");
    showArr(arr, totalElement);
}