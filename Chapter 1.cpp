#include <iostream>

using namespace std;

int binary_search(int list[], int item);

int main(){
    int arr[5] = {1, 3, 5, 7 , 9};
    cout << binary_search(arr, 3) << endl;
    cout << binary_search(arr, -1) << endl; 
}

int binary_search(int list[], int item){
    int low = 0;
    int high = sizeof(list) / sizeof(list[0]);

    while (low <= high){
        int mid = (low + high) / 2;
        int guess = list[mid];
        if (guess == item){
            return mid;
        }
        if (guess > item){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        return -1;
    }
}
