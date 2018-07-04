#include <crypt.h>
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
    if (argc == 2) {
        char *hash;
        int i,j,k,l,m;
        hash=argv[1];
        char salt[] = "..";
        strncpy(salt, argv[1], 2);
        long long t=0;
        char compare[6];
        
        //one word password
        
        for(i=65;i<97+26;i++){
            if(i>=91&&i<=96)
                continue;
            compare[0]=i;
            compare[1]='\0';
            t++;
            //printf("Trying %s \n",compare);
            if(strcmp(crypt(compare,salt), hash) == 0){
                printf("password is %s",compare);
                printf("\nfound after trying %lli times\n",t);
                return 0;
            }
        }    
        
        // two word passowrd
        
        for(i =65;i<97+26;i++){
            if(i>=91&&i<=96)
                continue;
            for( j=65;j<97+26;j++){
                if(j>=91&&j<=96)
                    continue;
                compare[0]=i;
                compare[1]=j;
                compare[2]='\0';
                t++;
                //printf("Trying %s \n",compare);
                if(strcmp(crypt(compare,salt), hash) == 0){
                    printf("password is %s",compare);
                    printf("\nfound after trying %lli times\n",t);
                    return 0;
                }
                
            }
                
        }
        
        // three word password 
        
        for(i =65;i<97+26;i++){
            if(i>=91&&i<=96)
                continue;
            for( j=65;j<97+26;j++){
                if(j>=91&&j<=96)
                    continue;
                for( k=65;k<97+26;k++){
                    if(k>=91&&k<=96)
                        continue;
                    compare[0]=i;
                    compare[1]=j;
                    compare[2]=k;
                    compare[3]='\0';
                    t++;
                    //printf("Trying %s \n",compare);
                    if(strcmp(crypt(compare,salt), hash) == 0){
                        printf("password is %s",compare);
                        printf("\nfound after trying %lli times\n",t);
                        return 0;
                    }
                    
                }
                
            }
            
        }
        
        //four word password
        
        for(i =65;i<97+26;i++){
            if(i>=91&&i<=96)
                continue;
            for( j=65;j<97+26;j++){
                if(j>=91&&j<=96)
                    continue;
                for( k=65;k<97+26;k++){
                    if(k>=91&&k<=96)
                        continue;
                    for(l=65;l<97+26;l++){
                        if(l>=91&&l<=96)
                            continue;
                        compare[0]=i;
                        compare[1]=j;
                        compare[2]=k;
                        compare[3]=l;
                        compare[4]='\0';
                        t++;
                        //printf("Trying %s \n",compare);
                        if(strcmp(crypt(compare,salt), hash) == 0){
                            printf("password is %s",compare);
                            printf("\nfound after trying %lli times\n",t);
                            return 0;
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
        // five word password
        
        for(i =65;i<97+26;i++){
            if(i>=91&&i<=96)
                continue;
            for( j=65;j<97+26;j++){
                if(j>=91&&j<=96)
                    continue;
                for( k=65;k<97+26;k++){
                    if(k>=91&&k<=96)
                        continue;
                    for(l=65;l<97+26;l++){
                        if(l>=91&&l<=96)
                            continue;
                        for(m=65;m<97+26;m++){
                            if(m>=91&&m<=96)
                                continue;
                            compare[0]=i;
                            compare[1]=j;
                            compare[2]=k;
                            compare[3]=l;
                            compare[4]=m;
                            compare[5]='\0';
                            t++;
                            //printf("Trying %s \n",compare);
                            if(strcmp(crypt(compare,salt), hash) == 0){
                                printf("password is %s",compare);
                                printf("\nfound after trying %lli times\n",t);
                                return 0;
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
    }
    else{
        printf("Usage: ./crack hash\n");
        return 1;
    }
    return 0;
}