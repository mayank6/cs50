/* Implement a program that determines whether a provided credit card number is valid according to Luhn’s algorithm */

/* Luhn’s algorithm
1.Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products' digits together.

2.Add the sum to the sum of the digits that weren’t multiplied by 2.

3.If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid! */

#include<stdio.h>
#include<cs50.h>

int main(){
long number,ccn,number1,number3; //ccn=credit card number and number,number1,number2 are used to make copies of ccn for further use
int sum=0,sum1=0,digit=0,digit1=0,y,z,p;
do{
ccn=get_long_long(); //prompt user for ccn
}while(ccn<0);
number=ccn;
number1=ccn;
number3=ccn;
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
while(ccn>0){
	ccn=ccn/10;
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
