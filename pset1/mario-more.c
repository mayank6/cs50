#include<stdio.h>
#include<cs50.h>

int main(){
    int i,j,k,x;
    x=get_int();
    for (i=x;i>0;i--){
        
        for(j=i-1;j>0;j--){
            printf(" ");
        }
        for(k=1;k<x-i+2;k++){
            printf("#");
        }
    
        
    printf("  ");
     for(k=1;k<x-i+2;k++){
            printf("#");
        }
    printf("\n");    
    }
    

    
}