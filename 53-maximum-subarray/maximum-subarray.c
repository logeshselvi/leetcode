int maxSubArray(int* nums, int numsSize) {
    if(numsSize==0)return 0;
    int maxsum =nums[0];
    int currsum =nums[0];
    for(int i=1;i<numsSize;i++){
        currsum=(currsum > 0 ? currsum : 0)+nums[i];
        if(currsum > maxsum){
            maxsum = currsum;
        }
    }
    return maxsum;
    
}