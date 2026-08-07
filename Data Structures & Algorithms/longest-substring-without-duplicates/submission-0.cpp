class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxcount=0;
        for(int i=0;i<s.size();i++){
        vector<bool>visited(256,false);
            int count=0;
            for(int j=i;j<s.size();j++){
                if(!visited[s[j]]){
                  visited[s[j]]=true;
                  count++;
                }else{
                    break;
                }

            }
            maxcount=max(count,maxcount);
        }
        return maxcount;
    }
};
