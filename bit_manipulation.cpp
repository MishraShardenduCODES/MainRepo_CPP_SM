#include <iostream>
using namespace std;

int get_bit(int n, int i) {
    return ((n & (1 << i)) != 0);
}

int set_bit(int n, int i) {
    return (n | (1 << i));
}

int clear_bit(int n, int i) {
    int mask = (~(1 << i));
    return (n & mask);
}

int update_bit(int n, int i, int value) {
    int mask = (~(1 << i));
    n = (n & mask);
    return (n | (value << i));
}

int main() {
    int n, i;
    cout << "Tell a number : ";
    cin >> n;
    cout << "Tell the bit position : ";
    cin >> i;
    int valueToSet;
    cout << "Tell the value to set (0 or 1): ";
    cin >> valueToSet;
    cout<<endl;

    int a = get_bit(n, i);
    cout << "Bit at position " << i << " is: " << a << endl;

    int b = set_bit(n, i);
    cout << "After setting bit " << i << ": " << b << endl;

    int c = clear_bit(n, i);
    cout << "After clearing bit " << i << ": " << c << endl;

    int d = update_bit(n, i, valueToSet);
    cout << "After updating bit " << i << " with value " << valueToSet << ": " << d << endl;

    return 0;
}
