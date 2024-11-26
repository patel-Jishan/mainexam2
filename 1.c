/*WAP to find Cube of any number using UDF*/

#include<stdio.h>
int cube(num){
	return num*num*num;
}
int main(){
	int number;
	printf("Enter the number:");
	scanf("%d",&number);
	int result=cube(number);
	printf("cube of %d :%d\n",number,result);
}
