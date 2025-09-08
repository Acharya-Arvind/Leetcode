/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    var ans;
    for(let i=0;i<nums.length;i++){
        for(let j=0;j<nums.length;j++){
            if(i==j) continue;
            else if(nums[i]+nums[j]==target) return [i,j];
        }
    }
    return [];
};
