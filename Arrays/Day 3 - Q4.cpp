class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0,count2=0,candidate1=-1,candidate2=-1;
        int n=nums.size();
       
        for(int i=0;i<nums.size();i++){
            if(nums[i]==candidate1){
                count1++;
            }
            else if(nums[i]==candidate2){
                count2++;
            }
            
            else if(count1==0){
                count1=1;
                candidate1=nums[i];
            }
            else if(count2==0){
                count2=1;
                candidate2=nums[i];
            }
            else{
                count1--;
                count2--;
            }     
        }
        count1=count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==candidate1)
                count1++;
            else if(nums[i]==candidate2)
                count2++;
        }
        vector<int> ans;
        if(count1>n/3)
            ans.push_back(candidate1);
        if(count2>n/3)
            ans.push_back(candidate2);
        
        return ans;
        
    }
};
