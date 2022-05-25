class Solution {
public:
    string reverseWords(string s) {
        
        int l = 0;
        int r = 0;
        
        while(l < s.size())
        {
            while(r < s.size() && s[r]!= ' ')
            {
                r++;
            }
            
            reverse (s.begin()+l, s.begin()+r);
            r++;
            l = r;
        }
        
        return s;
        
    }
};
