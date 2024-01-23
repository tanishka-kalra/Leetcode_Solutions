class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char,int> mp;
        vector<string>v;
        string a,b,c;
        a="qwertyuiopQWERTYUIOP";
        b="asdfghjklASDFGHJKL";
        c="zxcvbnmZXCVBNM";
        for(char i : a)
        {
            mp[i]=1;
        }
          for(char i : b)
        {
            mp[i]=2;
        }
          for(char i : c)
        {
            mp[i]=3;
        }
        for(string i : words)
        {   bool ans = true;
            for(int j=0;j<i.size()-1;j++)
            {
                if(mp[i[j]]!=mp[i[j+1]]){
                    ans=false;
                    break;
                }
                
            }
            if(ans==true) v.push_back(i);


        }
        return v;

    }
};
