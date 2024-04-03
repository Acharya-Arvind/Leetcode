class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # if(len(s)!=len(t)):
        #     return False
        # set1=set(s)
        # set2=set(t)
        # if(len(set1)!=len(set2)):
        #     return False
        # for i in s:
        #     if i not in t:
        #         return False
        # return True
        s1=[]
        s2=[]
        for i in s:
            s1.append(i)
        for i in t:
            s2.append(i)
        s1.sort()
        s2.sort()
        if(len(s1)!=len(s2)):
            return False
        for i,j in zip(s1,s2):
            if(i!=j):
                return False
        return True
