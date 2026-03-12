# this is the first program i worte (will learn binary search and then upload the code again)
class Solution:
    def mySqrt(self, x: int) -> int:
        if x < 2:
            return x
        for i in range(1, x // 2 + 2):
            if i * i == x:
                return i
            if i * i > x:
                return i - 1
# binary search
class Solution:
    def mySqrt(self, x: int) -> int:
        if x < 2:
            return x
        
        left = 1  # left number
        right = x // 2  # middle of the number
         
        while left <= right:
            mid = (left + right) // 2  #assigns the middle of left and right       
            if mid * mid == x: # checking the exact answer
                return mid
            elif mid * mid < x:
                left = mid + 1      # if its small go right
            else:
                right = mid - 1     # if its too big, go left
        
        return right