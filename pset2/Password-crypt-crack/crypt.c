/* program to convert a password into hash using DES crypt */
#include <crypt.h>
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
    if (argc == 2) {
        char *salt;
        salt=argv[1];
        string password=get_string("Password to be hashed using DES Crypt:");
        string result = crypt(password, salt);
        printf("%s",result);
        
        
    }
    else{
        printf("Usage: ./crack salt\n");
        return 1;
    }
    
}