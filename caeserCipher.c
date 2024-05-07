#include<stdio.h>

void encryption(char str[],int key){
    for(int i=0;str[i]!='\0';i++){

            if(str[i]>='a'&&str[i]<='z'){
                str[i]=str[i]+key;
                if(str[i]>'z'){
                    str[i]=str[i]-'z'+'a'-1;
                } 
            }
            else if(str[i]>='A'&&str[i]<='Z'){
                    str[i]=str[i]+key;
                if(str[i]>'Z'){
                    str[i]=str[i]-'Z'+'A'-1;
                } 
            }
    }
}

void decryption(char str[],int key){
   for(int i=0;str[i]!='\0';i++){

            if(str[i]>='a'&&str[i]<='z'){
                str[i]=str[i]-key;
                if(str[i]<'a'){
                    str[i]='z'-('a'-str[i]-1);
                } 
            }
            else if(str[i]>='A'&&str[i]<='Z'){
                    str[i]=str[i]-key;
                if(str[i]>'Z'){
                    str[i]='Z'-('A'-str[i]-1);

                } 
            }
    }
}

int main(){

    char plainStr[20],cipStr[20];
    int key;
     printf("Enter key:");
     scanf("%d",&key);

    printf("Enter plaintext:");
    scanf("%s",plainStr);

    encryption(plainStr,key);
    printf("%s\n",plainStr);

    printf("Enter ciphertext:");
    scanf("%s",cipStr);
    decryption(cipStr,key);

    printf("%s\n",cipStr);


    return 0;
}