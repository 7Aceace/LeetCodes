int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2; // since we are looking for only 2 elements
    int* result = (int*)malloc(*returnSize * sizeof(int)); // allocate space for the result
    for(int i = 0; i < numsSize; i++) {
        for(int j = i + 1; j < numsSize; j++) {// for next element as i is the previous element
            if(nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL; // if no solution found
}