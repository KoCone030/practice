#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* ans;
    *returnSize = 2;
    ans = (int*)malloc(2 * sizeof(int));
    for(int i = 0; i < numsSize - 1; i++){
        for(int j = i + 1; j < numsSize; j++){
            if((nums[i] + nums[j]) == target){
                ans[0] = i;
                ans[1] = j;                
            }
        }
    }
    return ans;
}

int main(void){
    int target, n;
    int* b, *returnSize, *a;
    returnSize = (int*)malloc(sizeof(int));
    *returnSize = 2;
    
    freopen("testCase.md", "r", stdin);
    freopen("anser.md", "w", stdout);

    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &target);
    b = twoSum(a, n, target, returnSize);
    for(int i = 0; i < 2; i++)
        printf("%d ", b[i]);
    
    free(a);
    free(b);
    free(returnSize);    
    return 0;
}