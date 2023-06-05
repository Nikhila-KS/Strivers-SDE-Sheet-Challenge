#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> generateRows(int n){
        vector<int> roww;
        roww.push_back(1);
        int ans=1;
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/(i);
            roww.push_back(ans);
        }
        return roww;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<numRows+1;i++){
            ans.push_back(generateRows(i));
        }
        return ans;
    }
};