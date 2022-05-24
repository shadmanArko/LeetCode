class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        if(nums.size() == 0|| nums.size() == 1)
        {
            return;
        }
        
        int right = 0;
        int left = 0;
        
        while(right < nums.size())
        {
            if(nums[right] == 0)
            {
                right++;
            }
            
            else
            {
                swap(nums[right], nums[left]);
                right++;
                left++;
                
            }
                
        }
        
    }
};
