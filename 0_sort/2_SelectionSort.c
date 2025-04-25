#include <stdio.h>

void selectionSort(int arr[], int arrSize){
    for(int i = 0; i < arrSize - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < arrSize; j++){
            if(arr[i] > arr[j])
                min_idx = j;
        }
        int tmp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = tmp;
    }
}

int main(void){
    int a[50] = {0};
    int n;

    freopen("testcase.md","r",stdin);                    //read
    freopen("2_SelectionSort_result.md","w",stdout);     //write

    scanf("%d", &n);                                     //read into a[]
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    selectionSort(a, n);                                 //sort
    for(int i = 0; i < n; i++)                           //write on file
        printf("%d ",a[i]);
    
    return 0;
}