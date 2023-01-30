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
    int arr[10] = {20, 30, 50, 60, 70};
    LOG("Given array: ");
    showArr(arr, 5);

    // add an element at the END of the array 
    int element = 80;
    int n = 5;
    arr[n] = element;
    LOG("\nAdded at the END: ");
    showArr(arr, n+1);

    // add an element at the FIRST index of the array 
    element = 10;
    for(int i = 6; i >= 0; i--) 
        arr[i+1] = arr[i];
    
    arr[0] = element;
    LOG("\nAdded at the FIRST: ");
    showArr(arr, 7);

    // add an element at the MIDDLE(3) index of the array 
    element = 40;
    n = 3;
    for(int i = 6; i >= 3; i--) 
        arr[i+1] = arr[i];
    
    arr[n] = element;
    LOG("\nAdded at the MIDDLE(4): ");
    showArr(arr, 8);
}