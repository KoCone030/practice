#include <stdio.h>

void bubbleSort(int arr[], int arrSize){
    for(int i = 0; i < arrSize - 1; i++){
        int check = 0;
        for(int j = i + 1; j < arrSize; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                check = 1;
            }
        }
        if(check == 0)
            break;
    }
}

int main(void){
    int a[50] = {0};
    int n;

    freopen("testcase.md","r",stdin);                //read
    freopen("1_BubbleSort_result.md","w",stdout);     //write

    scanf("%d", &n);                                //read into a[]
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    bubbleSort(a, n);                               //sort
    for(int i = 0; i < n; i++)                      //write on file
        printf("%d ",a[i]);
    
    return 0;
}