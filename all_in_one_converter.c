#include <stdio.h>
int main(void){
int choice;
float number;
float answer;

do{


printf("1.Distance Converter \n");
printf("2.Weight Converter \n");
printf("3.Temperature Converter \n");
printf("4.Time Converter \n");
printf("5.Data Converter \n");
printf("6.Volume Converter \n\n");
printf("Chose a Converter: ");
scanf("%d",&choice);


if( choice == 1){
    printf("\nWelcome to Distance Converter. Select Any Category \n");
    printf("1.KM to Meters \n");
    printf("2.Meters to Inches \n");
    printf("3.Inches to CM\n");
    printf("4.Meters to KM\n");
    printf("5.Inches to Meters\n");
    printf("6.CM to Inches\n\n");
    printf("Chose Your Category: ");
    scanf("%d",&choice);
    printf("Enter Value You Want to Convert: ");
    scanf("%f", &number);

    if(choice == 1){
        answer = 1000*number;
        printf("%f Meters" , answer);
    }
    else if(choice == 2){
        answer = 39.3701*number;
        printf("%f Inch" , answer);

    }
    else if(choice == 3){
        answer = 2.54*number;
        printf("%f CM" , answer);
    }
    else if(choice == 4){
        answer = number/1000;
        printf("%f KM" , answer);
    }
    else if(choice == 5){
        answer = number/39.3701;
        printf("%f Meters" , answer);
    }
    else if(choice == 6){
        answer = number/2.54;
        printf("%f Inch" , answer);
    }
    else{printf("Chose Right Category");}

}/*Choice 1 ends here*/

else{
        if( choice == 2){
            printf("\nWelcome to Weight Converter. Select Any Category \n");
            printf("1.KG to Pound \n");
            printf("2.Pound to Grams \n");
            printf("3.Grams to  KG\n");
            printf("4.Pound to Kg \n");
            printf("5.Grams to Pound \n");
            printf("6.KG to Gram \n\n");
            printf("Chose Your Category: ");
            scanf("%d",&choice);
            printf("Enter Value You Want to Convert: ");
            scanf("%f", &number);

            if(choice == 1){
                answer = 2.20462*number;
                printf("%f Ponds" , answer);
            }
            else if(choice == 2){
                answer = 453.592*number;
                printf("%f Grams" , answer);

            }
            else if(choice == 3){
                answer = 0.001*number;
                printf("%f KG" , answer);
            }
            else if(choice == 4){
                answer = number/2.20462;
                printf("%f KG" , answer);
            }
            else if(choice == 5){
                answer = number/453.592;
                printf("%f Pound" , answer);
            }
            else if(choice == 6){
                answer = number/0.001;
                printf("%f Gram" , answer);
            }
            else{printf("Chose Right Category");}

    }/*choice 2 ends here*/



else{
        if( choice == 3){

            printf("\nWelcome to Temperature Converter. Select Any Category \n");
            printf("1.Celsius to Fahrenheit \n");
            printf("2.Fahrenheit to Kelvin \n");
            printf("3.Kelvin to Celsius \n");
            printf("4.Fahrenheit to Celsius \n");
            printf("5.Kelvin to Fahrenheit \n");
            printf("6.Celsius to Kelvin \n\n");
            printf("Chose Your Category: ");
            scanf("%d",&choice);
            printf("Enter Value You Want to Convert: ");
            scanf("%f", &number);

            if(choice == 1){
                answer = number*9/5+32;
                printf("%f Fahrenheit" , answer);
            }
            else if(choice == 2){
                answer = (number-32)*5/9+273.15;
                printf("%f Kelvin" , answer);

            }
            else if(choice == 3){
                answer = number-273.15;
                printf("%f Celsius" , answer);
            }
            else if(choice == 4){
                answer = (number-32)*5/9;
                printf("%f Celsius" , answer);
            }
            else if(choice == 5){
                answer = (number-273.15)*9/5+32;
                printf("%f Fahrenheit" , answer);
            }
            else if(choice == 6){
                answer = number+273.15;
                printf("%f Kelvin" , answer);
            }
            else{printf("Chose Right Category");}

     }/*choice 3 ends here*/
else{
        if( choice == 4){

            printf("\nWelcome to Time Converter. Select Any Category \n");
            printf("1.Hours to Minutes \n");
            printf("2.Minutes to Second \n");
            printf("3.Second to Hours \n");
            printf("4.Minutes to Hours \n");
            printf("5.Second to Minutes\n");
            printf("6.Hours to Second \n\n");
            printf("Chose Your Category: ");
            scanf("%d",&choice);
            printf("Enter Value You Want to Convert: ");
            scanf("%f", &number);

            if(choice == 1){
                answer = 60*number;
                printf("%f Minutes" , answer);
            }
            else if(choice == 2){
                answer = 60*number;
                printf("%f Second" , answer);

            }
            else if(choice == 3){
                answer = 0.000277778*number;
                printf("%f Hours" , answer);
            }
            else if(choice == 4){
                answer = number/60;
                printf("%f Hours" , answer);
            }
            else if(choice == 5){
                answer = number/60;
                printf("%f Minutes" , answer);
            }
            else if(choice == 6){
                answer = number*3600;
                printf("%f second" , answer);
            }
            else{printf("Chose Right Category");}

    }/*choice 4 ends here*/
else{
        if( choice == 5){
            printf("\nWelcome to DATA Converter. Select Any Category \n");
            printf("1.TB to GB \n");
            printf("2.GB to MB \n");
            printf("3.MB to KB \n");
            printf("4.GB to TB\n");
            printf("5.MB to GB \n");
            printf("6.KB to MB \n\n");
            printf("Chose Your Category: ");
            scanf("%d",&choice);
            printf("Enter Value You Want to Convert: ");
            scanf("%f", &number);

            if(choice == 1){
                answer = 1024*number;
                printf("%f GB" , answer);
            }
            else if(choice == 2){
                answer = 1024*number;
                printf("%f MB" , answer);

            }
            else if(choice == 3){
                answer = 1024*number;
                printf("%f KB" , answer);
            }
            else if(choice == 4){
                answer = number/1024;
                printf("%f TB" , answer);
            }
            else if(choice == 5){
                answer = number/1024;
                printf("%f GB" , answer);
            }
            else if(choice == 6){
                answer = number/1024;
                printf("%f MB" , answer);
            }
            else{printf("Chose Right Category");}

        }/*choice 5 ends here*/
else{
        if( choice == 6){
            printf("\nWelcome to Volume Converter. Select Any Category \n");
            printf("1.Liter to Milliliter \n");
            printf("2.Milliliter to Liter \n");
            printf("Chose Your Category: ");
            scanf("%d",&choice);
            printf("Enter Value You Want to Convert: ");
            scanf("%f", &number);

            if(choice == 1){
                answer = 1000*number;
                printf("%f Milliliter" , answer);
            }
            else if(choice == 2){
                answer = number/1000;
                printf("%f Liter" , answer);

            }
            else{printf("Chose Right Category");}

        }/*choice 6 ends here*/

else{
    printf("Please Select Right Converter!!");
}
}/*choice 5 else end here*/
}/*choice 4 else end here*/
}/*choice 3 else end here*/
}/*choice 2 else end here*/
}/*choice 1 else end here*/





printf("\nDo you want to Continue.! Enter 0 to Continue ");
    scanf(" %c", &choice);


}
while(choice=='0');









}
