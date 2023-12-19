#include<stdio.h>
#include<string.h>
#define N strlen(genpoly)
char data[28];
char checkvalue[28];
char genpoly[10];
int datalenght,i,j;
void XOR()
{
	for(j=1;j<N;j++)
	{
		checkvalue[j]=((checkvalue[j]==genpoly[j])?'0':'1');
	}
}
void crc()
{
	for(i=0;i<N;i++)
		checkvalue[j]=data[i];
	do
	{
		if(checkvalue[0]=='1')
		  XOR();
		for(j=0;j<N-1;j++)
		  checkvalue[j]=data[i++];
	}while(i<=datalenght+N-1);
}
void receiver()
{
	printf("enter the received data:");
	scanf("%s",data);
	printf("\n----------------\n");
	printf("data received:%s",data);
	crc();
	for(i=0;(i<N-1)&&(checkvalue[i]!='1');i++)
	{
		if(i<N-1)
		  printf("\n error detected\n \n");
		else
		  printf("\n no error detected\n \n");
	}
}
int main()
{
	printf("\n Enter data t o be transmitted:");
	scanf("%s",data);
	printf("\n Enter the generating polynomial:");
	scanf("%s",genpoly);
	for(i=datalenght;i<datalenght+N-1;i++)
	  data[i]='0';
	printf("\n----------------\n");
	printf("\n Data padded with n-1 zeros:%s",data);
	printf("\n----------------\n");
	crc();
	printf("\n crc value is:%s",checkvalue);
	printf("\n----------------\n");
	for(i=datalenght;i<datalenght+N-1;i++)
	{
		data[i]=checkvalue[i-datalenght];
	}
	printf("\n----------------\n");
	printf("\n final data to be sent:%s",data);
	printf("\n----------------\n");
	receiver();
}
