#
# @lc app=leetcode.cn id=1441 lang=python3
#
# [1441] 用栈操作构建数组
#
from typing import List
# @lc code=start
class Solution:
    def buildArray(self, target: List[int], n: int) -> List[str]:
        res = []
        prev = 0
        for number in target:
            for _ in range(number - prev - 1):
                res.append('Push')
                res.append('Pop')
            res.append('Push')
            prev = number
        return res
# @lc code=end

test = [1, 2, 4]
n = 4
print(Solution().buildArray(test, n))