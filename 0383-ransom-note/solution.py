class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ra=ransomNote
        ma=magazine
        r=[]
        m=[]
        for i in ra:
            r.append(i)
        for i in ma:
            m.append(i)
        for i in r:
            if i in m:
                
                m.remove(i)
                continue
            if i not in m:
                return False
        return True    
        
