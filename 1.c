//Input mark & validate function prototype
void inputValidMarks();
//Input mark & validate function body
void inputValidMarks(){
5
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