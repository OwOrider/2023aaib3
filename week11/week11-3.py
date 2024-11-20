class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        ans,total=0,0 #最大的total 與 目前的total
        counter=Counter() #左邊小寫，右邊大寫
        for i in range(k):
            num=nums[i]
            counter[num]+=1
            total+=num #把現在的樹，加到total裡
        if len(counter)==k:ans=max(ans,total)

        for i in range(k,len(nums)):
            left,right=nums[i-k],nums[i]
            counter[left]-=1
            counter[right]+=1
            total=total-left+right
            if counter[left]==0: del counter[left]
            if len(counter)==k:ans=max(ans,total)
        return ans