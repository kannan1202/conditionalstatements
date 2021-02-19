#include<stdio.h>
int main() {
int studmark;
printf("Enter the student's mark to know the Grade.\n");
scanf("%d",&studmark);
if(studmark<0 || studmark>100)
    printf("Wrong input");
else if(studmark>=70 && studmark<=84)
    printf("Grade B");
else if(studmark>= 55 && studmark<=69)
    printf("Grade C");
else if(studmark>=40 && studmark<=54)
    printf("Grade D");
else if(studmark>=85 && studmark<=100)
    printf("Grade A");
else
    printf("Grade F");
    
return 0;
}
