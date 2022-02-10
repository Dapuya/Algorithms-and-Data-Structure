#include <iostream>

using namespace std;

int bin(int arr[], int l, int r, int x ){
    while( l <= r){
        int m = l + (r-l) / 2;
        if(arr[m] == x ) return m;
        if(arr[m] < x){
            l = m + 1;
        }
        else{
            r = m - 1;
        }
    }
    return -1;
}

int main(){
    int num;
    cin >> num;
    int *keys = new int [num];
    for (int i = 0; i < num; i++) {
        cin >> keys[i];
    }
    
    int rows, cols;
    cin >> rows >> cols;

    int **arr = new int* [rows];

    for (int i = 0; i < rows; i++) {
        arr[i] = new int [cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    int n = rows * cols;
    int *a = new int [n];

    for (int i = 0; i < rows; i = i + 2) {
        for (int j = 0; j < cols; j++) {
            a[i * cols + j] = arr[i][j];
        }
    }

    for (int i = 1; i < rows; i = i + 2) {
        for (int j = 0; j < cols; j++) {
            a[i * cols + j] = arr[i][cols - j - 1];
        }
    }

    for (int i = 0; i < rows; i++) {
        delete [] arr[i];
    }
    delete [] arr;

    int *b = new int [n];
    for (int i = 0; i < n; i++) {
        b[i] = a[n - 1 - i];
    }
    delete [] a;

    int m, p;
    int index;

    for (int i = 0; i < num; i++) {
        index = n - 1 - Search_Binary (b, 0, n, keys[i]);
        if (index == n) {
            cout << -1 << endl;
            continue;
        }
        m = index / cols;
        if (m % 2 == 0) {
            p = index % cols;
        }
        else {
            p = cols - 1 - index % cols;
        }
        cout << m << " " << p << endl;
    }

    return 0;
}