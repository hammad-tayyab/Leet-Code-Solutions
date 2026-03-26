class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)# shortest solution usign find fucntion of string which return the index of first occurrence of the substring in the string if found else it return -1