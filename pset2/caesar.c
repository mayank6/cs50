#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
int main(int argc,char *argv[]){
    if (argc==2){
        int key=atoi(argv[1]);
        string text=get_string();
        for(int i=0,n=strlen(text);i<n;i++){
            if (isalpha(text[i])){
                if (isupper(text[i])){
                    printf("%c", (((text[i] + key) - 65) % 26) + 65);
                }
                else if(islower(text[i])){
                    printf("%c", (((text[i] + key) - 97) % 26) + 97);
                }
            }
            else{
                printf("%c",text[i]);
            }
        }
    }
    else{
        return 0;
    }
    
    
}