int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int i=0, lastj = 0, j, k = 0;
    int *res = malloc(nums1Size * sizeof(int));

    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);

    for (i = 0; i < nums1Size; i++) {
        if (i > 0 && nums1[i] == nums1[i-1])
            continue;
    
        for (j = lastj; j< nums2Size; j++) {
            if(j > 0 && nums2[j] == nums2[j-1])
               continue; 
           
            if (nums1[i] == nums2[j]) {
                res[k++] = nums1[i];
                lastj = j;
                break;
            }
            
            if (nums1[i] < nums2[j]) {
                lastj = j;
                break;
            }
        }
    }

    *returnSize = k;
    return res;
}
