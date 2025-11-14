int* transformArray(int* nums, int numsSize, int* returnSize){
int* res = malloc(sizeof(int) * numsSize);
*returnSize=numsSize;
int idx=0;
for(int i=0;i<numsSize; i++){
if(nums[i]%2==0)res[idx++]=nums[i];
}
for(int i=0; i<numsSize; i++){
if(nums[i] %2!=0) res[idx++] = nums[i];
}
return res;
}

