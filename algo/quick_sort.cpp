#include "iostream"

using namespace std;

int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low -1;
    for (int j = low; j < high; ++j) {
        if(a[j] < pivot){
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[high]);
    return i+1;
}

void quicksort(int a[], int low, int high){
    if(low < high){
        int pos = partition(a, low, high);
        quicksort(a, low, pos-1);
        quicksort(a, pos+1, high);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    quicksort(a, 0, n-1);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    return 0;
}