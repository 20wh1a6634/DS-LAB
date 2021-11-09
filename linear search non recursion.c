#include<stdio.h>

int linear_search(int arr[], int size, int element){
    int pos;
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return i + 1;

            }

    }
    return -1;

}


int main(){
    int size;
    printf("Enter size : ");
    scanf("%d", &size);
    int arr[size];
    int element, pos;
    printf("Enter %d elements : ", size);
    for (int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Element to be searched : ");
    scanf("%d", &element);
    pos = linear_search(arr, size, element);
    if (pos == -1){
        printf("Element is not found\n");
    }
    else{
        printf("Element found at %d.\n", pos);
    }



}

/*enter size : 5
 enter 5 elements: 5
    1
    8
    7
    9
    element to be searched:8
    element found at 3 */