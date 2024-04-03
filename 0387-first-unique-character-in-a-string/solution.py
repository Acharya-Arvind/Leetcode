class Solution:
    def firstUniqChar(self, s: str) -> int:
        index=0
        for i in range(len(s)):
            flag=0
            index=i
            for j in range(0,len(s)):
                if(i==j):
                    continue
                if(s[i]==s[j]):
                    flag=1
                    break
            if(flag==0):
                return index        
        return -1 
            
