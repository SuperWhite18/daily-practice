int missingNumber(int* nums, int numsSize){
    int i=0;
    int sum=0;
   int len=(1+numsSize)*numsSize/2;
   for(i=0;i<numsSize;i++)
   {
     sum+=nums[i];
   }
   return len-sum;

}
