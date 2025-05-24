#include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int *p=arr;
    printf("the value of arr \n");
    printf("%d \n",*(p+5));
    return 0;
}
