#include<iostream>
#include<cstdio>
#include<vector>
#include<array>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        ans.push_back(celsius+273.15);
        ans.push_back(celsius*1.80+32.00);
        return ans;
    }
};