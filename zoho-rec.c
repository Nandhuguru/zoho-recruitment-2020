#include<stdio.h>
#include<string.h>
void main()
{
char name[20];
int len,space,k=0,i,j,mid,in;
scanf("%s",&name);
len=strlen(name);
space=len;
mid=len/2;
for(i=0;i<len;i++)
{
	k=0;
	while(k<space)
	{
		printf(" ");
		k=k+1;
	}
	space--;
	in=0;
	for( j=0;j<i+1;j++)
	{	
		if(mid!=len)
		{
			printf("%c",name[mid]);
			mid++;
		}
		else
		{
			printf("%c",name[in]);
			in++;	
		}
	}
	mid=len/2;
	printf("\n");
}

}
