#include "TwoNum.hpp"
/**
 * 数据会重复, pass : Tree 方法
 * 数据返回下标, pass: 排序 + 双指针
 * 
 */

std::vector<int>  TwoSum::twoSum(std::vector<int> &nums, int target)
{
    std::unordered_map<int, int> hash; // key: 数值, value: 下标
    for (int i = 0; i < nums.size(); ++i) { 
        int complement = target - nums[i]; // 获取当下的 差
        if (hash.count(complement)) {  // 如果已经存在一个跟 此差相等的值
            return {hash[complement], i}; // 返回它的 下标 ，和 此差的下标
        }
        hash[nums[i]] = i; // 否则将其按{差， 下标}的格式存入hash
    }
    return {};
}

