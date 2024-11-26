/*WAP to make table of given number using for loop 5*2=10         */
#include<stdio.h>
int main() {
int i,num;
printf("Enter the table:");
scanf("%d",&num);
for(i=1;i<=10;i++){
	printf("%d*%d=%d\n",num,i,num*i);
}
}
