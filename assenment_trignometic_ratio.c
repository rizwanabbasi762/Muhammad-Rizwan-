/*Sir i try this but its not properly work*/

#include<stdio.h>
#include<strings.h>
int main(void){
    int trig [3][5] = {
    {0,'1/2','√2/2','√3/2',1},
    {1,'√3/2','√2/3','1/2',0},
    {0,'√3/3',1,'√3',0}};

    int angle ;
    printf("Enter angle and get trigonometric ratios values\n");
    printf("Enter Angle \n");
    scanf("%d",&angle);
//at angle 0
    if(angle == 0){
         printf("Sing value at %d degree is %d \n",angle ,trig[0][0]);
         printf("Cos value at %d degree is %d \n",angle ,trig[1][0]);
         printf("Tan value at %d degree is %d \n",angle ,trig[2][0]);

         //at angle 30
    }else if(angle == 30){
         printf("Sing value at %d degree is %d \n",angle ,trig[0][1]);
         printf("Cos value at %d degree is %d \n",angle ,trig[1][1]);
         printf("Tan value at %d degree is %d \n",angle ,trig[2][1]);

         //at angle 45
    }else if(angle == 45){
         printf("Sing value at %d degree is %d \n",angle ,trig[0][2]);
         printf("Cos value at %d degree is %d \n",angle ,trig[1][2]);
         printf("Tan value at %d degree is %d \n",angle ,trig[2][2]);
         //at angle 60
    }else if(angle == 60){
         printf("Sing value at %d degree is %d \n",angle ,trig[0][3]);
         printf("Cos value at %d degree is %d \n",angle ,trig[1][3]);
         printf("Tan value at %d degree is %d \n",angle ,trig[2][3]);
         // at angle 90
    }else if(angle == 90){
         printf("Sing value at %d degree is %d \n",angle ,trig[0][4]);
         printf("Cos value at %d degree is %d \n",angle ,trig[1][4]);
         printf("Tan value at %d degree is %d \n",angle ,trig[2][4]);
    }else{
        printf("Please enter Right Angle");
    }



return 0;
}
