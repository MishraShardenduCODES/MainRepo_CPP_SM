//vowel or consonant c++
#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"Tell a chaercter : ";
    cin>>c;
    c=tolower(c);
    if(c=='a' c=='e'||c=='i' ||c=='o' c=='u'){
        cout<<"It's a vowel \n";
    }else{
        cout<<"It's a consonant \n";
    }
    return 0;
}
