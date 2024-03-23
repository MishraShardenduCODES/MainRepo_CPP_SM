// Using modulo operation (mod) is essential when dealing with large numbers, especially in competitive programming or cryptographic applications. Here's why modulo operation is important:

// 1. Preventing Integer Overflow: When dealing with large numbers, the result of arithmetic operations may exceed the maximum value representable by the data type. Using modulo operation ensures that the result remains within a manageable range.

// 2. Reducing Memory Usage: Large numbers require more memory to store. By applying modulo operation, you keep the numbers small, thus reducing memory consumption.

// 3. Handling Large Outputs Efficiently: In competitive programming, the output needs to be within a specific range (e.g., 10^9 + 7). Modulo operation helps ensure that the output stays within this range.

// 4. Ensuring Correctness in Number Theory: In mathematics, certain properties hold only when numbers are within a certain range. Modulo operation helps maintain these properties and ensures correct results.

// 5. Avoiding Precision Issues: When working with floating-point arithmetic, precision issues may arise due to rounding errors. Modulo operation helps mitigate these issues by working with integers.

// 6. Efficiently Working with Cyclic Structures: Modulo operation is useful when dealing with cyclic structures like arrays or circular queues.

// In summary, using modulo operation is crucial for preventing integer overflow, reducing memory usage, ensuring correctness, and efficiently handling large numbers in various applications.
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
ll fact(int a){
    ll res = 1;
    while (a>1)
        res = (res*(a--)) % MOD ;
    return res;
}
int main(){
    int a;
    cout<<"Tell the number to find facotrial : "; cin>>a ;
    cout<<"Factorial of the number "<<a<<" is : "<<fact(a);
}