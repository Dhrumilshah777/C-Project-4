// create read 

#include<stdio.h>
void main(){
    int array[10],sum=0,choose,n=0;

    while(1){
        printf("Menu:\n");
        printf("1. CREATE\n2. READ\n3");
        printf("Choose a number from(1-5):");
        scanf("%d",&choose);

        switch(choose){
            case 1:
         
                if(n<10){
                    printf("Enter number to create array:");
                    scanf("%d",&array[n]);
                    n++;
                }
                else{
                    printf("full\n");
                }
                break;
            case 2:
             
                printf("Elements of array:");
                for(int i=0;i<n;i++){
                    printf("%d",array[i]);
                    sum+=array[i];
                }
                printf("Sum is:%d\n",sum);
                break;
        }   
    }
}