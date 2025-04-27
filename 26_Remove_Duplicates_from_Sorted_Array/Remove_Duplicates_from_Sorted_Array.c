#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize) {
    int i,k=1;
    for(i=0;i+1<numsSize;i++)
    {
        if(nums[i]!=nums[i+1])
        {
            nums[k]=nums[i+1];
            k++;
        }
    }
    return k;
}

int main(void){
    int* a;
    int n, b;

    freopen("testcase.md", "r", stdin);
    freopen("answer.md", "w", stdout);

    scanf("%d", &n);
    a = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    b = removeDuplicates(a, n);
    for(int i = 0; i < b; i++)
        printf("%d ", a[i]);
    
    free(a);
    return 0;
}