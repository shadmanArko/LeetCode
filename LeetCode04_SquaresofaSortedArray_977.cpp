class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int right = nums.size()-1;
        int left = 0;
        vector<int> output (nums.size(), 0);
            
            for(int i = nums.size() - 1; i >= 0 ; i--)
            {
                if(abs(nums[right])>= abs(nums[left]))
                {
                    output[i] = nums[right] * nums[right];
                    right--;
                }
                
                else
                {
                    output[i] = nums[left] * nums[left];
                    left++;
                }
            }
        
        return output;
        
    }
};
