class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int , int >v;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
          v[nums[i]]++;  
        }
        n=n/2;
        for(auto x : v)
        {
            if(x.second>n)
            {
                return x.first;
            }
         
        }
           return 0;
    }

};