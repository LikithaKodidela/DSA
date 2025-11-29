class Solution(object):
    MOD=10**9+7
    def countGoodNumbers(self, n):
        """
        :type n: int
        :rtype: int
        """
        even_pos=(n+1)/2
        odd_pos=n//2
        return (pow(5,even_pos,self.MOD)*pow(4,odd_pos,self.MOD)) % self.MOD
        