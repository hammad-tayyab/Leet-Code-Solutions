class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int n = haystack.size(), m = needle.size(); // length of the both strings

        for (int i = 0; i <= n - m; i++) //n-m checks the starting positions that can be valid according to the lenght of the substring
        { 
            int j = 0;
            while (j < m && haystack[i + j] == needle[j]) //checking the whole substrign
                j++;
            if (j == m) return i;//returning the index if the whole substring matches
        }
        return -1;
    }
};