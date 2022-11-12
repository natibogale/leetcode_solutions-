#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        int n = 0;
        int m = nums.size()-1;
        vector <pair<int,int>> v;
        for(int i=0; i<m+1;i++ )
        {
            v.push_back(make_pair(nums[i],i));
        }
        sort(v.begin(),v.end());
        while (true)
        {   
            if(v[n].first + v[m].first == target){
                return {v[n].second,v[m].second};
            }
            else if(v[n].first + v[m].first  < target)
            {
                n++;
            }
            else if (v[n].first + v[m].first  > target)
            {
                m--;
            } 

        }
    }
};

    int main()
    {
        vector<int> nums = {3,3};
        int target = 6;
        Solution s;
        vector<int> indexes= s.twoSum(nums, target);
        for(auto x:indexes)
        {
            cout<<x<<" ";
        }
    }