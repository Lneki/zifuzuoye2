#include<stdio.h>
#include<string.h>
//It is not easy hen you want to make something change,but if it is easy that everyone can make it
int main()
{
    char a[100],b[10];
	int i=0,j=0,m=0;
	char tempb;
	printf("�Ӽ���������һ���ַ���:");
	strlwr(gets(a));
	printf("�Ӽ���������Ҫ���ҵ��ַ���:");
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
