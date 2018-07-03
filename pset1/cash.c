/* Implement a program that calculates the minimum number of coins required to give a user change */
#include<stdio.h>
#include<cs50.h>
#include <math.h>
int main(){
float change;

int coin,count=0;
do{
    change=get_float(); //prompt user to give change value 
    
}
while(change<0);
coin=change*100; //convert dollars into cents
while(true){
    if(coin>=25){
        count+=1;
        coin=coin-25;
    }
    else if(coin>=10){
      count+=1;
      coin=coin-10;
    }
    else if(coin>=5){
      count+=1;
      coin=coin-5;
    }

    else if(coin>=1){
      count+=1;
      coin=coin-1;
    }
    else
    break;
}
    
    printf("%d",count); // print total number ofcoins 
}
