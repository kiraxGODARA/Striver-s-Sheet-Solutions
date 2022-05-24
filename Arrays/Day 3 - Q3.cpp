class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // moore voting algo
        int cnt=0,candidate=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0)
                candidate=nums[i];
            if(nums[i]==candidate)
                cnt++;
            else
                cnt--;
            //cout << candidate << endl;
        }
        return candidate;
    }
};
