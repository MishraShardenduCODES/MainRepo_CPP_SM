#include<bits/stdc++.h>
using namespace std;

#define frb(i, len) for(int i = len-1; i >= 0; i--)
#define fr(i, len) for(int i = 0; i < len; i++)
#define tas cout<<"Tell a string : ";
#define nl cout<<"\n";
#define N 1000
typedef vector<string> vstr;
typedef vector<int> vint;
typedef long long int ll;
typedef const int c_int;
typedef double dbl;
int InversionCount = 0;
c_int MOD = 1e9 + 7;
c_int Mx_row = 100;
c_int Mx_col = 100;

void solve(vint nums,vector<vint>& ans,int index){
    if(index >= nums.size()){
        ans.push_back(nums);
        return;
    }
    for (int i=index;i<nums.size();i++){
        swap(nums[index],nums[i]);
        solve(nums,ans,index+1);
        swap(nums[index],nums[i]);
    }
}

vector<vint> permutation(vint nums){
    vector<vint> ans;
    int index = 0;
    solve(nums,ans,index);
    return ans;
}

int main(){
    vint nums = {1,2,3};
    vector<vint> ans = permutation(nums);
    for(auto i : ans){
        for(auto num : i) {
            cout << num << " ";
        }
        cout << endl;
    }
}