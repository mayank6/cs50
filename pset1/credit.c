#include<stdio.h>
#include<cs50.h>

int main(){
long number,x,number1,number3;
int sum=0,sum1=0,digit=0,digit1=0,y,z,p;
do{
x=get_long_long();
}while(x<0);
number=x;
number1=x;
number3=x;
while(number>0){
	number=number/10;
	y=number%10;
	number=number/10;
	y=y*2;
	if(y>=10){
		z=y;
		y=z+y%10;
	}
	sum=sum+y;
}
while(number1>0){
	y=number1%10;
	sum1=sum1+y;
	number1=number1/100;
}
while(x>0){
	x=x/10;
	digit+=1;
}
digit1=digit;
while(digit1-2){
	number3=number3/10;
	digit1-=1;

}
p=number3/10;

if(digit==15 && (number3==34 || number3==37))
	printf("AMEX\n");
else if(digit==16 && (number3==51||(number3==52||(number3==53||(number3==54||number3==55)))))
	printf("MASTERCARD\n");
else if((digit==13 && digit==16) && p==4)
	printf("VISA\n");
else
	printf("INVALID\n");


}
