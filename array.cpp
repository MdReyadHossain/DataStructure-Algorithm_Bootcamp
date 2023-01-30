#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl;

int main() {
    // 1D array
    LOG("1D array:");
    int a[5] = {50, 10, 20, 40, 80};
    
    for(int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }

    // 2D array
    LOG("\n\n2D Array: ");
    int arr[2][5] = {{5, 4, 3, 2, 1}, {50, 40, 30, 20, 10}};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 5; j++) {
            cout << arr[i][j] << " ";
        }
        LOG("");
    }
}