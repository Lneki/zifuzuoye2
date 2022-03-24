#include<stdio.h>
#include<string.h>
//It is not easy hen you want to make something change,but if it is easy that everyone can make it
int main()
{
    char a[100],b[10];
	int i=0,j=0,m=0;
	char tempb;
	printf("从键盘中输入一串字符串:");
	strlwr(gets(a));
	printf("从键盘输入想要查找的字符串:");
	gets(b);
	int blen=strlen(b);
	for(i=0;a[i]!='\0';i++)
	{
		char tempb[blen+1];
		tempb[blen]='\0';
		for(j=0;j<blen;j++)
			tempb[j]=a[i+j];
		int res=strcmp(tempb,b);
		if(res=0)
		{
				m++;
				
		}

	}
	printf("%d",m);

	return 0;
}
