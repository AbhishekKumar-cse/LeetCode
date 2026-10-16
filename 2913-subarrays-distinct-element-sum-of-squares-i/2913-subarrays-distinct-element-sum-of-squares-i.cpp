class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
         long long ans =0;
         for(int i=0; i<n; i++){
            int dist =0;
            int freq[101] = {0};
            for (int j = i; j < n; j++) {
          if (freq[nums[j]] == 0) {
             dist++;
           }

         freq[nums[j]]++;

         ans += 1LL * dist * dist;
     }

         }



        return ans;
    }
};