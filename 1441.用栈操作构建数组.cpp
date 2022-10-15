/*
 * @lc app=leetcode.cn id=1441 lang=cpp
 *
 * [1441] 用栈操作构建数组
 */
#include <vector>
#include <string>
#include <iostream>

using namespace std;
// @lc code=start
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> res;
        int prev = 0;
        for (int number : target) {
            for (int i = 0; i < number - prev - 1; i++) {
                res.emplace_back("Push");
                res.emplace_back("Pop");
            }
            res.emplace_back("Push");
            prev = number;
        }
        return res;
    }
};
// @lc code=end

int main(){
    vector<int> test = {1,2,4};
    int n = 4;
    for (string s : Solution().buildArray(test, n)){
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
