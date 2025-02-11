#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
 float a,b,product;
    scanf("%d %d",&a,&b);
    product=a*b;
    printf("Product: %d",product);    return 0;
}