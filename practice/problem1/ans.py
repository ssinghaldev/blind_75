class Solution:

    def twoSum(self, nums: List[int], target: int) -> List[int]:

        num_map = {}

        for idx, num in enumerate(nums):

            if (target - num) in num_map:

                return [idx, num_map[target - num]]

            else:

                num_map[num] = idx

        

        
