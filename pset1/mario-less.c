/* Implement a program that prints out a half-pyramid of a specified height */

/*  ##
   ###
  ####
 #####
###### */

#include<stdio.h>
#include<cs50.h>

int main(){
    int i,j,k,x;
    x=get_int();
    for (i=x;i>0;i--){
        
        for(j=i-1;j>0;j--){
            printf(" ");
        }
        for(k=0;k<x-i+2;k++){
            printf("#");
        }
    printf("\n");
        
    }

    
}
