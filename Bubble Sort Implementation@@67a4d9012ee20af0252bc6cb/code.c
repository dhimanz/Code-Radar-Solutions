// Your code here...
#include <stdio.h>
void sort(int arr[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void array(int arr[],int n){
   for(int i=0;i<n-1;i++){
    printf("%d ",arr[i]);
   } printf("\n");
}
void main(){
    int n,arr[];
    scanf("%d",&n);
     
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
   
    array(arr, n);
    
    sort(arr, n);
    
    
    array(arr, n);
}