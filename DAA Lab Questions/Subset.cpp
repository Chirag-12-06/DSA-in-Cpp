#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Subset(vector<int> &W, int target, int position, vector<int> &ans) {
    if (target == 0) {
        cout << "Solution: {";
        for (int k = 0; k < ans.size(); k++) {
            cout << ans[k];
            if (k != ans.size() - 1) cout << ",";
        }
        cout << "}\n";
        return;
    }

    for (int i = position; i < W.size(); i++) {
        if (W[i] <= target) {
            ans.push_back(W[i]);
            Subset(W, target - W[i], i + 1, ans);
            ans.pop_back();  
        }
    }
}

int main(){
    // vector<int> W={2,5,6,7};
    // int m =7;
    vector<int> ans;
    vector<int> W={2,5,3,4};
    int m =7;


    sort(W.begin(),W.end());
    Subset(W,m,0,ans);
}