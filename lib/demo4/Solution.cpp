#include "Solution.hpp"

double Solution::findMedianSortedArrays(std::vector<int> nums1, std::vector<int> nums2){
    int x = 0, y = 0, i = 0, leng = nums1.size() + nums2.size();
    std::vector<int> nums3(leng);
    
    while (x < nums1.size() && y < nums2.size()){
        if (nums1[x] < nums2[y]){
            nums3[i] = nums1[x];
            x++;
        }else{
            nums3[i] = nums2[y];
            y++;
        }
        i++;
    }
    while (x < nums1.size()){
        nums3[i] = nums1[x];
        x++; i++;
    }

    while (y < nums2.size()){
        nums3[i] = nums2[y];
        y++; i++;
    }

    if (leng % 2){
        return nums3[leng / 2];
    }
    
    return ((double)nums3[leng / 2 - 1] + (double)nums3[leng / 2]) / 2;
}