int* runningSum(int* nums, int numsSize, int* returnSize){
int* res = malloc(sizeof(int) * numsSize);
*returnSize=numsSize;
res[0]=nums[0];
for(int i=1;i<numsSize; i++){
res[i]=res[i-1]+nums[i];
}
return res;
}

