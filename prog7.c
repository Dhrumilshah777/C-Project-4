
#include<stdio.h>
void main(){
    int array[]={10,30,20,50,40};
    int n=0;
    int n=sizeof(array)/sizeof(array[0]);

    for(int i=1;i<n;i++){
        if(array[i]>array[i-1]){
            n+=array[i];
        }
    }
    printf("Sum of greater number :%d",n);
}