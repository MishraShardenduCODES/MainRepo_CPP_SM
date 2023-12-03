//Patterns in c++
#include<bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
using namespace std;
int pat1(int a);
int pat2(int a);
int pat3(int a);
int pat4(int a);
int pat5(int a);
int pat6(int a);
int pat7(int a);
int pat8(int a);
int pat9(int a);
int pat10(int a);
int pat11(int a);
int pat12(int a);
int pat13(int a);
int pat14(int a);
int pat15(int a);
int pat16(int a);
int pat17(int a);
int pat18(int a);
int pat19(int a);
int pat20(int a);
int fact(int a);
int main(){
    int a;
    cout<<"Tell how many rows you want : ";
    cin>>a;
    pat1(a);
    cout<<endl;
    pat2(a);
    cout<<endl;
    pat3(a);
    cout<<endl;
    pat4(a);
    cout<<endl;
    pat5(a);
    cout<<endl;
    pat6(a);
    cout<<endl;
    pat7(a);
    cout<<endl;
    pat8(a);
    cout<<endl;
    pat9(a);
    cout<<endl;
    pat10(a);
    cout<<endl;
    pat11(a);
    cout<<endl;
    pat12(a);
    cout<<endl;
    pat13(a);
    cout<<endl;
    pat14(a);
    cout<<endl;
    pat15(a);
    cout<<endl;
    pat16(a);
    cout<<endl;
    pat17(a);
    cout<<endl;
    pat18(a);
    cout<<endl;
    pat19(a);
    cout<<endl;
    pat20(3);
    cout<<endl;
    return 0;
}
int fact(int a){
    int x=1;
    if(a==0){
        return 1;
    }else{
        for(int i=1;i<=a;i++){
            x=x*i;
        }
        return x;
    }
}
int pat1(int a){
    for(int i=1;i<=a+1;i++){
        for(int j=1;j<=a;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int pat2(int a){
    for(int i=1;i<=a+1;i++){
        for(int j=1;j<=a;j++){
            if(j==1||j==a||i==1||i==a+1){
                cout<<" * ";
            }else{
                cout<<"   "; 
            }
        }
        cout<<endl;
    }
}
int pat3(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        for(int j=i;j<=2*a-i+1;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int i=a+1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        for(int j=i;j<=2*a-i+1;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int pat4(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<"   "; 
        }
        for(int j=1;j<=i;j++){
            cout<<" * "; 
        }
        cout<<endl;
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            cout<<"   "; 
        }
        for(int j=1;j<=i;j++){
            cout<<" * "; 
        }
        cout<<endl;
    }
}
int pat5(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}
int pat6(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
}
int pat7(int a){
    for(int i=a;i>1;i--){
        for(int j=1;j<=a-i+1;j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i+1;j++){
            cout<<" "<<i<<" ";
        }
        cout<<endl;
    }
}
int pat8(int a){
    int q=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<q++<<" ";
        }
        cout<<endl;
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" "<<q++<<" ";
        }
        cout<<endl;
    }
    
}
int pat9(int a){
    int q=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<" "<<q%2<<" ";
            q++;
        }
        cout<<endl;
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<" "<<q%2<<" ";
            q++;
        }
        cout<<endl;
    }
}
int pat10(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(int j=i;j>=1;j--){
            cout<<" "<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(int j=i;j>=1;j--){
            cout<<" "<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}
int pat11(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int pat12(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    for(int i=a-1;i>=1;i--){
        for(int j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(j==1||j==2*i-1){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}
int pat13(int a){
    for(int i=1;i<=2*(a)+1;i++){
        cout<<" * ";
    }
    cout<<endl;
    for(int i=1;i<=a;i++){
        for(int j=a-i+1;j>=1;j--){
            cout<<" * ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"   ";
        }
        for(int j=a-i+1;j>=1;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=a;i>=1;i--){
        for(int j=a-i+1;j>=1;j--){
            cout<<" * ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"   ";
        }
        for(int j=a-i+1;j>=1;j--){
            cout<<" * ";
        }
        cout<<endl;
    }
    for(int i=1;i<=2*(a)+1;i++){
        cout<<" * ";
    }
    cout<<endl;
}
int pat14(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=a;j++){
            cout<<" * ";
        }
        cout<<endl;
    }
}
int pat15(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            cout<<"   ";
        }
        for(int j=1;j<=a;j++){
            if(j==1||j==a||i==1||i==a){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}
int pat16(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        for(int j=i;j<=2*a-i+1;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    for(int i=a+1;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        for(int j=i;j<=2*a-i+1;j++){
            cout<<"   ";
        }
        for(int j=1;j<=i;j++){
            if(j==1||j==i){
                cout<<" * ";
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}
int pat17(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=a-i+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=a-i+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int pat18(int a){
    for(int i=1;i<a;i++){
        for(int j=1;j<=a-i+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    for(int i=a;i>=1;i--){
        for(int j=1;j<=a-i+1;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int pat19(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<=a-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            int dmy;
            dmy=fact(i)/(fact(i-j)*fact(j));
            cout<<dmy<<" ";
        }
        cout<<endl;
    }
}
int pat20(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;j<=9;j++){
            if( (i+j) % 4 == 0 || i==2 && j%4==0){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
