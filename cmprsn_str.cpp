#include <iostream>
using namespace std;

void cmprs(string&str) {
    int len = str.size();
    int ans = 0;
    
    for (int i = 0; i < len; ) {
        int j = i + 1;
        while (j < len && str[i] == str[j]) {
            j++;
        }
        str[ans++] = str[i];
        int cnt = j - i;
        if (cnt > 1) {
            // Convert the count to characters and append them to the string
            while (cnt > 0) {
                str[ans++] = '0' + cnt % 10; // Convert digit to character
                cnt /= 10;
            }
        }
        i = j;
    }
    // Resize the string to remove any extra characters
    str.resize(ans);
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cmprs(str);
    cout << "Compressed string: " << str << endl;
    return 0;
}
