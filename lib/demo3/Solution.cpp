#include "Solution.hpp"
/**
 * 三种情况：
 *      
 */
int Solution::lengthOfLongestSubstring(std::string s){
    std::unordered_map<char, int> cache;
    int max = 0, count = 0, nth = 0;
    for (int i = 0; i < s.size(); i++){
        if (cache.count(s[i]) == 0 ){ 
            cache.insert({s[i], i});
            count ++;
        }else{ //当出现重复的时候更新 
            nth = cache.find(s[i]) -> second; // 
            count = nth >= i - count ? i - nth : count+1;  // 范围内的话，更新范围，否则,count 正常计数   
            cache.insert_or_assign(s[i], i);
        }
        max = count > max ? count : max;
    }
    return max;
}

// "abcabcbb"

