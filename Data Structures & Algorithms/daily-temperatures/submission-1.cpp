class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       // int n=temperatures.size();
         vector<int>ans;
        // for(int i=0;i<n-1;i++){
        //     int count=0;
        //     int j=i+1;
        //     while(j<n && temperatures[i]>=temperatures[j]){
                
        //         j++;
        //     }
        //     if(j<n){
        //         ans.push_back(j-i);
        //     }else{
        //         ans.push_back(0);
        //     }
            
        // }
        // ans.push_back(0);
        int n=temperatures.size();
       vector<int>result(n,0);
       stack<int>s;
       for(int i=0;i<n;i++){
          while(!s.empty() && temperatures[i]>temperatures[s.top()]){
            int previous=s.top();
            s.pop();
            result[previous]=i-previous;
          }
          s.push(i);
          
       }
       return result;
    }
};
