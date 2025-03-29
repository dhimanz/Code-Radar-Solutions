// Your code here...
#include <stdio.h>
void main(){
int i,j,rows;
scanf("%d",&rows);
for(i=1;i<=rows;++i){
    for(j=2;j<=i;j++){
        printf("* ");
    }printf("\n");
} 
}