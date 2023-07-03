/*Author
Takbir Hasan
*/

#include<stdio.h>
#include<windows.h>
#define CYCLE 59
int main(){


    printf("\n\t######### Digital Watch ########\n\n");

    int h=0,m=0,s=0;

   while (1){


        printf("\r\t\t     %.2d:%.2d:%.2d",h,m,s);

          s++;
          Sleep(1000);
          if (s==CYCLE){
            m++;
            s=0;
            if (m==CYCLE){
                h++;
                m=0;

                if(h==12){
                   h=0;
                }
            }
          }

    }


 return 0;
}
