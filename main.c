#include <stdio.h>
#include <stdlib.h>

int charNum(char *vocab){
    int i=0;
    while(vocab[i]!='\0'){

        i++;
    }
    return i-1;
}


int main()
{
    char vocab[100];
    char temp;

   printf("IT IS CODED BY BORA CETIN\n\n\n\n\nPlease Enter A String:");
   gets(vocab);

   int number;
   number=charNum(vocab);
    for(int r=0;r<number;r++){
        temp=vocab[r];
        vocab[r]=vocab[number];
        vocab[number]=temp;
        number--;
    }
    printf("%s",vocab);


    return 0;
}
