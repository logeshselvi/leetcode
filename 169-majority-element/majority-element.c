int majorityElement(int* nums, int numsSize) {
    int count=0;
    int result=0;

    for(int i =0; i < numsSize;i++){
        if(count ==0){
            result =nums[i];
        }
        count += (nums[i] == result) ? 1 : -1 ;
    }
    return result;
}

    