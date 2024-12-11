/*
 * @lc app=leetcode id=904 lang=cpp
 *
 * [904] Fruit Into Baskets
 */
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxc=0;
        int l=0,r=0;
        unordered_map<int,int> mp;
        while(r<fruits.size()){
            mp[fruits[r]]++;
            if(mp.size()>2){
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
            maxc=max(maxc,r-l+1);
            r++;
        }
        return maxc;
    }
};

//TC: O(N)
//SC: O(1)

/* More Optimization
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int maxi=0;
        pair<int,int> p[]={{-1,0},{-1,0}};
        int val1=-1,val2=-1;
        int r=0;
        while(r<fruits.size()){ 
            if(p[0].first==-1 || p[0].first==fruits[r]){
                p[0].first=fruits[r];
                p[0].second++;
            }
            else if(p[1].first==-1 || p[1].first==fruits[r]){
                p[1].first=fruits[r]; 
                p[1].second++;
                swap(p[0],p[1]);
            }  
            else{
                int idx=r-1, cnt=0;
                while(idx>=0 && p[0].first==fruits[idx]){
                    idx--;
                    cnt++;
                }
                p[0].second=cnt;
                p[1].first=fruits[r];
                p[1].second=1;
                swap(p[0],p[1]);
            }
            maxi=max(maxi,p[0].second+p[1].second);
            r++;
        }
        return maxi;
    }
};
*/
