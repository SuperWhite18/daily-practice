void moveZeroes(int* nums, int numsSize){
    if(!nums || numsSize == 0)
        return;
    int i, j = 0;
    for(i = 0; i < numsSize; i++)
    {
        if(nums[i] != 0)
        {
            nums[j] = nums[i]; 
            j++;
        }
    }
    for(i = j; i < numsSize; i++)
    {
        nums[i] = 0;
    }
}
