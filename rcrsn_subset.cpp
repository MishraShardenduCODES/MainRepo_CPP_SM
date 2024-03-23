#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int idx, vector<vector<int> >& ans) {
    if (idx >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // to exclude
    solve(nums, output, idx + 1, ans);

    // to include
    int element = nums[idx];
    output.push_back(element);
    solve(nums, output, idx + 1, ans);
}

vector<vector<int> > subset(vector<int>& nums) {
    vector<vector<int> > ans;
    vector<int> output;
    int idx = 0;
    solve(nums, output, idx, ans);
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<vector<int> > ans = subset(arr);
    cout << "The subsets are : \n";
    for (const auto & subset : ans ) {
        cout << "[";
        for (const auto & num : subset ) {
            cout << num << " ";
        }
        cout << "]" << "\n";
    }
    return 0;
}