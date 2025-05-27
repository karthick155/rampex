#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    printf("enter the name :");
    fgets (a, 100, stdin);
    printf("%s",a);
    return 0;
}