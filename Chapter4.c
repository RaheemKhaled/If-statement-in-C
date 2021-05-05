#include <stdio.h>
#include <stdlib.h>
int main(){
    //global varaibles:
    char m1,m2,m3,m4,m5,m6[20] ;
    int score1,score2,score3,score4,score5,score6;
    int total ;

    printf("Enter the name of the FIRST subject :\n");
    scanf("%s", &m1);

    printf("\nEnter score of ");
    printf(&m1);
    printf(" is = ");


    scanf("%i", &score1 );

    if(score1 >= 90){
        printf("\n Your grade is A\n\n");
    }else if(score1 <90 && score1 >=80){
        printf("\n Your grade is B\n\n");
    }else if(score1 < 80 && score1>=60){
        printf("\n Your grade is C\n\n");
    }else{
        printf("\n Your grade is F\n\n");
    }


    printf("\nEnter the name of the SECOND subject :\n");
    scanf("%s", &m2);
    printf("\nEnter score of ");
    printf(&m2);
    printf(" is = ");

    printf("\nEnter score of this subject  "  );
    scanf("%i", &score2 );

    if(score2 >= 90){
        printf("\n Your grade is A\n\n");
    }else if(score2 <90 && score2 >=80){
        printf("\n Your grade is B\n\n");
    }else if(score2 < 80 && score2>=60){
        printf("\n Your grade is C\n\n");
    }else{
        printf("\n Your grade is F\n\n");
    }


    printf("\nEnter the name of the THIRD subject :\n");
    scanf("%s", &m3);
    printf("\nEnter score of ");
    printf(&m3);
    printf(" is = ");

    printf("\nEnter score of this subject  "  );
    scanf("%i", &score3 );

    if(score3 >= 90){
        printf("\n Your grade is A\n\n");
    }else if(score3 <90 && score3 >=80){
        printf("\n Your grade is B\n\n");
    }else if(score3 < 80 && score3>=60){
        printf("\n Your grade is C\n\n");
    }else{
        printf("\n Your grade is F\n\n");
    }


    printf("\nEnter the name of the FOURTH subject :\n");
    scanf("%s", &m4);
    printf("\nEnter score of ");
    printf(&m4);
    printf(" is = ");

    printf("\nEnter score of this subject  "  );
    scanf("%i", &score4 );

    if(score4 >= 90){
        printf("\n Your grade is A\n\n");
    }else if(score4 <90 && score4 >=80){
        printf("\n Your grade is B\n\n");
    }else if(score4 < 80 && score4>=60){
        printf("\n Your grade is C\n\n");
    }else{
        printf("\n Your grade is F\n\n");
    }

    printf("\nEnter the name of the FIFTH subject :\n");
    scanf("%s", &m5);
    printf("\nEnter score of ");
    printf(&m5);
    printf(" is = ");

    printf("\nEnter score of this subject  "  );
    scanf("%i", &score5 );

    if(score5 >= 90){
        printf("\n Your grade is A\n\n");
    }else if(score5 <90 && score5 >=80){
        printf("\n Your grade is B\n\n");
    }else if(score5 < 80 && score5>=60){
        printf("\n Your grade is C\n\n");
    }else{
        printf("\n Your grade is F\n\n");
    }



    printf("\nEnter the name of the SEXTH subject :\n");
    scanf("%s", &m6);

    printf("\nEnter score of this subject"  );
    scanf("%i", &score6 );
    printf("\nEnter score of ");
    printf(&m6);
    printf(" is = ");

    if(score6 >= 90){
        printf("\n Your grade is A\n\n");
    }else if(score6 <90 && score6 >=80){
        printf("\n Your grade is B\n\n");
    }else if(score6 < 80 && score6>=60){
        printf("\n Your grade is C\n\n");
    }else{
        printf("\n Your grade is F\n\n");
    }






}
