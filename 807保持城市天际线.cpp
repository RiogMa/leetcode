#include<iostream>
#include<cstdio>
#include<vector>
#include<array>
#include<algorithm>
#include<cmath>
using namespace std;

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> colMax(n);
        vector<int> rowMax(n);
        // int colMax[n]={0},rowMax[n]={0};
        // vector<vector<int> >temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                colMax[i]=max(colMax[i],grid[i][j]);
                rowMax[j]=max(rowMax[j],grid[i][j]);
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                res+=min(colMax[i],rowMax[j])-grid[i][j];
            }
        }
        return res;
    }
};