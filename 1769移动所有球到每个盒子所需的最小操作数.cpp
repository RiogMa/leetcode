#include<iostream>
#include<cstdio>
#include<vector>
#include<array>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(boxes[j]=='1'){
                    ans[i]+=abs(i-j);
                }
            }
        }
        return ans;
    }
};

int main(){
    // solution = Solution();
    Solution demo;
    string boxes="001011";
    vector<int> ans=demo.minOperations(boxes);
    for(vector<int>::iterator iter=ans.begin();iter!=ans.end();iter++){
        cout<<*iter<<" ";
    }
    return 0;

}