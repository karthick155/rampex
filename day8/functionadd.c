#include <stdio.h>
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}

int main() {
    printf("\n\n%d",add(3,7));
    printf("\n\n%d",sub(4,3));
    return 0;
}