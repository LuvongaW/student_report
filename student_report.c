#include <stdio.h>
int main(){
	char name[50];
	int age;
	float score ;
	float sum ;
	float average ;
	float a; //first score
	float b; //second score
	float c; //third score
	printf("---STUDENT REPORT---\n");
	printf("Enter Full Names:\n");
	fgets(name,sizeof(name),stdin);
	printf("Enter Age:\n");
	scanf("%d",&age);
	printf("1st Test score:\n");
	scanf("%f",&a);
	printf("2nd Test score:\n");
	scanf("%f",&b);
	printf("3rd Test score:\n");
	scanf("%f",&c);
	sum = a+b+c ;
	average = sum/3.0;//must have a .0 for float to be valid
	printf("---STUDENT REPORT---");
	printf("Name:%s",name);
	printf("Age:%d\n",age);
	printf("Total Score:%.2f\n",sum);
	printf("Average Score:%.2f\n",average);
	return 0;

	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	


	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
	
	
	
	

