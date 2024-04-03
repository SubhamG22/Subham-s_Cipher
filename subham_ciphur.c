//subham's cipher
#include<stdio.h>
#include<string.h>
int main(){
    //setting the 6,6 matrix
    char matrix[6][6] = {{'0','a','b','c','d','e'},
                        {'f','0','g','h','i','j'},
                        {'k','l','0','m','n','o'},
                        {'p','q','r','0','s','t'},
                        {'u','v','w','x','0','y'},
                        {'z','@','#','$','&','0'},
                        };
    //set bogus letter at the empty sell as @,#,$,&.
    int i,j,k=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            printf("%c\t",matrix[i][j]);
        }
        printf("\n");
    }
    char pt[13]={'a','t','t','a','c','k','a','t','d','a','w','n','\0'};
    printf("\nthe plain text is: %s\n",pt);
    //performing the encryption
    printf("\nthe ciphur text is: ");
    while(k!=12){
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if(pt[k]==matrix[i][j]){
                printf("%c",matrix[j][i]);
                k++;
            }
        }
    }
    }
    return 0;
 }
