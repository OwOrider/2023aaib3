#學習計畫第4週 easy 在一堆草堆裡 haystack，找到一支針needle
#在python只要一行 a.find(b) 在字串a裡找到字串b
class Solution:
    def strStr(self, a: str, b: str) -> int:
        return a.find(b)