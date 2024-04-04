class Solution:
    def isPowerOfTwo(self, n: int) -> bool:
        i=0
        c=0
        while(i<n+1):
            i=2**c
            if(i==n):
                return True
            c+=1
        return False

        
