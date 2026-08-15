class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        int duplicate=0;
        for(auto it=freq.begin();it!=freq.end();it++){
            if(it->second>1){
                return it->first;
            }
        }
       return -1;
    }
};
