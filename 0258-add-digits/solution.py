class Solution:
    def addDigits(self, num: int) -> int:
        x=num
        a=1
        # count=0
        while(a):
            count=0
            while(x!=0):
                count=count+x%10
                x=x//10
            x=count
            if(x>=0 and x<=9):
                a=0
        return count
        
