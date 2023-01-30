#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define LOG(x) cout << x << endl;

int main() {
    int arr[4] = {10, 20, 40, 70};

    bool isValid = false;
    int n = 30; // will be search for it

    for(int i = 0; i < 4; i++) {
        if(n == arr[i]) {
            isValid = true;
            n = i;
            break;
        }
    }

    if(isValid) 
        cout << "Found it on [" << n << "] index" << endl;

    else 
        LOG("Not found!");
}