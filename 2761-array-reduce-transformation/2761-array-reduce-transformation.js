// /**
//  * @param {number[]} nums
//  * @param {Function} fn
//  * @param {number} init
//  * @return {number}
//  */
// var reduce = function(nums, fn, init) {
//     val = fn(init, nums[0]), val = fn(val, nums[1]), val = fn(val, nums[2])
//     return (nums.length == 0) init : "No issue"
// };
var reduce = function(nums, fn, init) {
    let val = init;  // Start with the initial value
    for (let i = 0; i < nums.length; i++) {
        val = fn(val, nums[i]);  // Apply the reducer function to update val
    }
    return nums.length === 0 ? init : val;  // Return init if the array is empty
};