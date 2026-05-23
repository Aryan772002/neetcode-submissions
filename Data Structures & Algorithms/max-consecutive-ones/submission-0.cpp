class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int p=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
            p++;
            }
            else{
                p=0;
            }
            maxi=max(maxi,p);
        }
        
return maxi;
    }
};