#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
	char str[50];
	int i;
	printf("Enter a sentence :\n");
	fgets(str,50,stdin);
	for(i=0;str[i];i++);
	printf("The length of the sentence is %d",i-1);
}