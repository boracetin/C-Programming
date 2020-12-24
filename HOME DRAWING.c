#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length,width,spaceNumber,starNumber;
    length=30;
    width=31;
    spaceNumber=15;
    starNumber=width-(2*spaceNumber);      //we can calculate starNumber with a easy equation.
    for(int y=1;y<length;y++){          //This variable is for y axis;
            printf("\t\t\t\t\t");
        for(int x=1;x<width+1;x++){       //This variable is for x axis;
                if((x>spaceNumber && x<=spaceNumber+starNumber) && y<=(length/2)+1){    // for the roof of home
                    printf("B");
                }
                else if (y<=(length/2)+1){
                    printf(" ");
                }
                else if(((x>=1 && x<=3) || (x>=10 && x<21) || (x>29 && x<=31)) && y>((length/2)+1) && y<(length/2)+5 ) {       // for the windows of home;
                    printf("O");
               }
                else if(((x<1 || x>3) && (x<10 || x>=21) && (x<29 || x>31) ) && y>((length/2)+1) &&  y<(length/2)+5 ) {            // for the windows of home;
                    printf(" ");
                }
                else if(y>=(length/2)+5 && y<(length/2)+9 ){        // it is for between door and windows;
                    printf("R");
                }
                else if((x<=11 || x>20) && y>=(length/2)+9 && y<(length/2)+14){         //it is for door;
                    printf("A");
                }
                else if((x>11 && x<=20) && y>=(length/2)+9 && y<(length/2)+14){
                    printf(" ");
                }
                else{
                    printf("A");            //for the base of home;
                }
        }
        spaceNumber--;
        starNumber=width-(2*spaceNumber);       //we can calculate starNumber with a easy equation.
        printf("\n");
    }

    printf("\n\n\nCODED BY BORA CETIN :) \nGOOD STUDYING\n\n\n");
    return 0;
}
