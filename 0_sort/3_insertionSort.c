#include <stdio.h>

void insertionSort(int arr[], int arrSize){         //排序 i 前的數，並將 i 的數插入適當位置
    for(int i = 1; i < arrSize; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main(void){
    int a[50] = {0};
    int n;

    freopen("testcase.md","r",stdin);                    //read
    freopen("3_insertionSort_result.md","w",stdout);     //write

    scanf("%d", &n);                                     //read into a[]
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    insertionSort(a, n);                                 //sort
    for(int i = 0; i < n; i++)                           //write on file
        printf("%d ",a[i]);
    
    return 0;
}