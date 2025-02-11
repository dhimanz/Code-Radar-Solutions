#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str1[100];char str2[100];int a;
    scanf("%s %d %s",&str1,&a,&str2);
    printf("Name: %s\nAge: %d\nHobby: %s",str1,a,str2);
    return 0;
}