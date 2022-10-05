#include <stdio.h>
void inputValidMarks(); //Input mark & validate function prototype
void calculateTotalMarks(); //calculate total marks function prototype
void calculateAverageMarks(); //calculate average marks function prototype
//declaring variables
int marks;
int total;
int average;
int total_no_of_subjects =10;

int main(){
 inputValidMarks(); //Input mark & validate function calling
 calculateTotalMarks(); //calculate total marks function calling
 calculateAverageMarks(); //calculate average marks function calling
return 0;
}
//Input mark & validate function body
void inputValidMarks(){
 //input 10 subject marks
for (int n=0; n<10; n++){
 printf("\n\nEnter the marks for the subject: "); //print marks
 scanf("%d",&marks);
//validating marks
if(marks>=0 && marks<= 100){
printf("\n\nEnter the marks for the subject: "); //print marks
scanf("%d",&marks);
 }
 else{
printf("\nInvalid marks"); //print invalid message
}
}
}
//calculate total marks function body

void calculateTotalMarks(){
for (int n=0; n<10; n++){
 total= total+marks; //calculate total marks
}
 printf("\nTotal marks for the 10 subjects:%d",total); //print total marks
}
//calculate average marks function body
void calculateAverageMarks(){
average= total/total_no_of_subjects; //calculate average marks
printf("\n Average Marks of the 10 subjects:%d",average); //print average marks
}