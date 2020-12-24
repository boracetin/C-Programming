#include <stdio.h>
#include <stdlib.h>
float sumFun(float sumList[],int number){
    float result=0;
    for(int i=0;i<number;i++){
        result=result+sumList[i];
    }
    return result;
}

float multiplyFun(float multiplyList[],int number){
    float result=1;
    for(int i=0;i<number;i++){
        result=result*multiplyList[i];
    }
    return result;
}

float subtractFun(float subtractList[],int number){
     float result=subtractList[0];
    for(int i=1;i<number;i++){
        result=(result-subtractList[i]);

    }
    return result;
}

float divisionFun(float divisionList[],int number){
    float result=divisionList[0];
    for(int i=1;i<number;i++){
        result=(result/divisionList[i]);
    }
    return result;
}

int main()
{
    float sumList[10];
    float multiplyList[10];
    float divisionList[10];
    float subtractList[10];
    int choice;
    int number;
while(12<20){
    printf("\nCETIN CALCULATOR\nPlease Enter a number!\n");
    printf("""1 SUM\n2-SUBTRACT\n3-MULTIPLY\n4.DIVISION\n""");
    scanf("%d",&choice);
    if(choice==1){
        printf("\nPlease Enter number of transactions:");
        scanf("%d",&number);
        for(int i=0;i<number;i++){
            printf("numer %d is:",i+1);
            scanf("%f",&sumList[i]);
        }
        printf("\nresult:%f\n",sumFun(sumList,number));
    }

    else if(choice==2){
        printf("\nPlease Enter number of transactions:");
        scanf("%d",&number);
        for(int i=0;i<number;i++){
            printf("numer %d is:",i+1);
            scanf("%f",&subtractList[i]);
    }
  printf("\nresult:%f\n",subtractFun(subtractList,number));
  }

        else if(choice==3){

        printf("\nPlease Enter number of transactions:");
        scanf("%d",&number);
        for(int i=0;i<number;i++){
            printf("numer %d is:",i+1);
            scanf("%f",&multiplyList[i]);

    }
  printf("\nresult:%f\n",multiplyFun(multiplyList,number));
}

        else if(choice==4){
        printf("\nPlease Enter number of transactions:");
        scanf("%d",&number);
        for(int i=0;i<number;i++){
            printf("numer %d is:",i+1);
            scanf("%f",&divisionList[i]);

    }
      printf("\nResult:%f\n",divisionFun(divisionList,number));
}

        else{
            printf("\nPlease Enter a number which is between 1 and 4");
        }

}

    return 0;
}
