/* Implement a program that encrypts messages using Vigenère’s cipher */

#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc,char *argv[]){
    if(argc==2){
    int k=0,y=0,i;
    string x=argv[1];
    string key=x;
     while(y<strlen(x)) {
      key[y]=tolower(x[y]);
      y++;
   }
    string text=get_string();
    for(i=0,n=strlen(text);i<n;i++){
            if (isalpha(text[i])){
                if (isupper(text[i])){
                    printf("%c", (((text[i] + ((key[k]-97)%26)) - 65) % 26) + 65);
                }
                else if(islower(text[i])){
                    printf("%c", (((text[i] + ((key[k]-97)%26)) - 97) % 26) + 97);
                }
                k=(k+1)%strlen(key);
            }
            else{
                printf("%c",text[i]);
            }
    }
    }
    else{
        return 1;
    }
}
