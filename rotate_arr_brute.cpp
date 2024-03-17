#include <iostream>
using namespace std;

typedef long long int ll;
typedef double dbl;
#define nl cout<<"\n";
#define N 1000

int prnt_arr(int arr[], int length) {
    cout << "The elements of the array are: ";
    for(int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    return 0; // Return a value to match the function signature
}

int* mke_arr(int& len) {
    cout << "Tell the length: ";
    cin >> len;
    int* arr = new int[len];
    cout << "Tell all the elements: ";
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    return arr;
}
int rotate_arr(int arr[], int len) {
    int temp = arr[0];
    for(int i=0;i<len-1;i++){
        arr[i] = arr[i+1];
    }
    arr[len-1] = temp;
    return 0;
}

int main() {
    int len;
    int* arr = mke_arr(len);
    prnt_arr(arr, len);
    int num;
    nl;
    cout<<"Tell the number of rotation you want : ";
    cin>>num;
    for(int i=0;i<num;i++){
        rotate_arr(arr, len);
    }
    prnt_arr(arr, len); 
    delete[] arr; 
    return 0;
}

