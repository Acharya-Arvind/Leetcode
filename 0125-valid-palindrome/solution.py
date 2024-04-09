class Solution:
    def isPalindrome(self, s: str) -> bool:
        a=""
        s=s.lower()
        for i in s:
            if((i>='a' and i<='z') or (i>='A' and i<='Z' or i>='0' and i<='9')):
                a=a+i
        print(a)
        if(a==a[::-1]):
            return True
        else:
            return False
        
