class Solution {
public:
    bool checkInclusion(string s1, string s2) {
            sort(s1.begin(),s1.end());
        for(int i=0;i<s2.size();i++){
            string b=s2.substr(i,s1.size());
            sort(b.begin(),b.end());
            if(s1==b){
                return true;
            }
        }
        return false;
    }
};
