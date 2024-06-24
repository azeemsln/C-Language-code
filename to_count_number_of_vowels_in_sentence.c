#include<stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
	char str[100];
	int j,x=0;
	printf("Enter a sentence :\n");
	fgets(str,100,stdin);
	for(j=0;str[j]!='\0';j++)
	{
			if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u' || str[j]=='A' || str[j]=='E' || str[j]=='I' || str[j]=='O' || str[j]=='U')
			{	
				x++;
			}
	}
		/*if(str[j]==e)
			x=x+1;
		if(str[j]==i)
			x=x+1;
		if(str[j]==o)
			x=x=1;
		if(str[j]==u)
			x=x+1;*/
	printf(" The number of vowels in this sentence is %d \n",x);
	return 0;
}