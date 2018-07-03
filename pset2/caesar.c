/* Implement a program that encrypts messages using Caesar’s cipher */

/* Caesar’s algorithm (i.e., cipher) encrypts messages by "rotating" each letter by k positions. 
More formally, if p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key
(i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as 
                             ci=(pi+k)mod26
wherein mod26 here means "remainder when dividing by 26." This formula perhaps makes the cipher seem more complicated than it is,
but it’s really just a concise way of expressing the algorithm precisely*/

#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<string.h>
int main(int argc,char *argv[]){
    if (argc==2){
        int key=atoi(argv[1]);            //key given by user
        string text=get_string();
        for(int i=0,n=strlen(text);i<n;i++){
            if (isalpha(text[i])){                                    //checking whether given index in string is char 
                if (isupper(text[i])){
                    printf("%c", (((text[i] + key) - 65) % 26) + 65);
                }
                else if(islower(text[i])){
                    printf("%c", (((text[i] + key) - 97) % 26) + 97);
                }
            }
            else{                                                     //if not char then print as it is
                printf("%c",text[i]);
            }
        }
    }
    else{
        return 0;
    }
    
    
}
