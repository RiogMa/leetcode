#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int m=points.size();
        int n=queries.size();
        vector<int> ans(n,0);
       
        for(int i=0;i<n;i++){
            int x=queries[i][0],y=queries[i][1],r=queries[i][2];
            for(int j=0;j<m;j++){
                int a=points[j][0],b=points[j][1];
                if((a-x)*(a-x)+(b-y)*(b-y)<=r*r) ans[i]++;
            }
        }
        return ans;
    }

};

int main(){
    Solution demo;
    
}