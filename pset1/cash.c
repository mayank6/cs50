#include<stdio.h>
#include<cs50.h>
#include <math.h>
int main(){
float x;

int coin,count=0;
do{
    x=get_float();
    
}
while(x<0);
coin=x*100;
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
    
    printf("%d",count);
}
