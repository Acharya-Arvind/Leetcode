class Solution:
    def reverse(self, x: int) -> int:
        n=x
        pos=0
        num=0
        
        if(n<0):
            pos=1
        n=abs(x)
        while n>0:
            num=num*10+n%10
            n=n//10
        if(pos):
            num=-abs(num)
        if(num< -2147483648 or num >2147483647):
            return 0
    
        
        return num

