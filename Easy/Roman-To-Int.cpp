class Solution {
public:
    int romanToInt(string s) 
    {
        int n =0,x=0,prev =0;
        for(int i = s.size()-1 ; i>=0;--i)
        {
            if (s[i] == 'I') x= 1;
            else if (s[i] == 'V') x = 5;
            else if (s[i] == 'X') x = 10;
            else if (s[i] == 'L') x = 50;
            else if (s[i] == 'C') x = 100;
            else if (s[i] == 'D') x = 500;
            else x = 1000;
            if (prev > x) n -= x;
            else n += x;
            prev = x;

        }  
        return n;
    }
};