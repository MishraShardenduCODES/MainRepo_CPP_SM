#include<bits/stdc++.h>
using namespace std;

#define fr(i, len) for(int i = 0; i < len; i++)
#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
typedef long long int ll;
typedef const int c_int;
typedef vector<int> vnt; 
typedef double dbl;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;
#define N 1000
void make_arr(int arr[], int len) {
    if (len <= 0) return;
    cout << "Tell the elements of the array : ";
    cin >> arr[len - 1];
    make_arr(arr, len - 1);
}

void print_arr(int arr[], int len) {
    if (len <= 0) return;
    print_arr(arr, len - 1);
    cout << arr[len - 1] << " ";
}

bool isPossible(int arr[], int n, int m, int mid, int i = 0, int pg_sum = 0, int std_cnt = 0) {
    if (i == n) return true;
    if (pg_sum + arr[i] <= mid) {
        return isPossible(arr, n, m, mid, i + 1, pg_sum + arr[i], std_cnt);
    } else {
        std_cnt++;
        if (std_cnt >= m || arr[i] > mid) {
            return false;
        }
        return isPossible(arr, n, m, mid, i + 1, arr[i], std_cnt);
    }
}

int alloc_books_recursive(int arr[], int n, int m, int l, int r) {
    if (l > r) return -1;
    int mid = l + (r - l) / 2;
    if (isPossible(arr, n, m, mid)) {
        int ans = alloc_books_recursive(arr, n, m, l, mid - 1);
        return (ans == -1) ? mid : ans;
    } else {
        return alloc_books_recursive(arr, n, m, mid + 1, r);
    }
}

int main() {
    int no_std, len;
    cout << "Tell the number of students: ";
    cin >> no_std;
    cout << "Tell the number of books: ";
    cin >> len;
    int arr[N];
    make_arr(arr, len);
    cout << "The elements of the array are: ";
    print_arr(arr, len);
    cout << "\n";
    int l = 0, r = 0;
    for (int i = 0; i < len; i++) {
        r += arr[i];
    }
    cout << "The max of min element is: " << alloc_books_recursive(arr, len, no_std, l, r);
    return 0;
}