int* shuffle(int* nums, int numsSize, int n, int* returnSize){
int* res = malloc(sizeof(int) * numsSize);
*returnSize = numsSize;
int idx = 0;
for(int i = 0; i < n; i++){
res[idx++] = nums[i];
res[idx++] = nums[i + n];
}
return res;
}
