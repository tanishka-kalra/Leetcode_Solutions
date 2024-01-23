//return an array of all the integers that appears twice.
//solution : using a map
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        map<int,int> m;
        for(int i : nums)
        {
            m[i]++;
        }
        for(auto i : m)
        {
            if(i.second==2)
            {
                v.push_back(i.first);
            }
           
        }
        return v;
    }
};

