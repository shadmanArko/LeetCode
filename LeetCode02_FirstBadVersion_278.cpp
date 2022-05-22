// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long int low = 0;
        long int high = n;
        long int mid = 0;
        long int result = n;
        
        while(low <= high)
        {
            mid = (high+low)/2;
            
            if(isBadVersion(mid))
            {
                result = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        
        return result;
        
    }
};
