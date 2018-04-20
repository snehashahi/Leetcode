/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target) {
    
    static int ptr[2];
    int addr=0;
        for(int i=0;i<numsSize;i++){
            for(int j=i+1;j<numsSize;j++)
                if((nums[i] + nums[j])==target){
                    ptr[0]=i;
                    ptr[1]=j;
                    return ptr;
                }
                    
        }
    
    return ptr;
    
}


