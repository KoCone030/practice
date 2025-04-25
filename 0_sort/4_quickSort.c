#include <stdio.h>

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pivot = arr[high];
        int i = low - 1;
        for(int j = low; j < high; j++){
            if(arr[j] < pivot){                     //找節點( 小於high || 剩下 )
                i++;
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
        int tmp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = tmp;

        int pi = i + 1;
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main(void){
    int a[50] = {0};
    int n;

    freopen("testcase.md","r",stdin);                    //read
    freopen("4_quickSort_result.md","w",stdout);     //write

    scanf("%d", &n);                                     //read into a[]
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quickSort(a, 0, n - 1);                                     //sort
    for(int i = 0; i < n; i++)                           //write on file
        printf("%d ",a[i]);
    
    return 0;
}