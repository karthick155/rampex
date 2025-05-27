#include <stdio.h>
int main(){
    char w[100];
    printf("Enter a string :");
    fgets(w,100,stdin);
    for(int i=0;i<100;i++)
    {
        if(w[i]=='\0')
        {
            printf("Number of character :%d",i-1);
            break;
        }
    }
    return 0;
    }