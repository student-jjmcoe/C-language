#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void extractIpAddress(unsigned char*sourceString,short*ipAddress){
  unsigned short len=0;
  unsigned char oct[4]={0},cnt=0,cnt1=0,buf[5];

  len=strlen(sourceString);
  
  for(int i=0;i<len;i++){
    if(sourceString[i]!='.'){
      buf[cnt++]=sourceString[i];
    }
    if(sourceString[i]=='.' || i==len-1){
        buf[cnt]='\0';
        cnt=0;
        oct[cnt1++]=atoi(buf);
    }
  }
  ipAddress[0]=oct[0];
  ipAddress[1]=oct[1];
  ipAddress[2]=oct[2];
  ipAddress[3]=oct[3];
}
int main(){
  unsigned char ip[20]={0};
  short ipAddress[4];
  printf("Enter Ip Address(xxx.xxx.xxx.xxx format): ");
  scanf("%s",ip);

  extractIpAddress(ip,&ipAddress[0]);

  printf("%3d.%3d. %3d. %3d\n",ipAddress[0],ipAddress[1],ipAddress[2],ipAddress[3]);

  if(ipAddress[0]>=0 && ipAddress[0]<=127){
    printf("\n Class A Ip Address");
    printf("\nnumber of networks : %f",pow(2,7));
    printf("\nnumber of addresses in network : %f",pow(2,24)-2);
    printf("\n first address is: ");
    printf("%3d.0.0.0",ipAddress[0]);
    printf("\n last address is: ");
    printf("%3d.255.255.255",ipAddress[0]);
  }

if(ipAddress[0]>=127 && ipAddress[0]<=191){
    printf("\n Class B Ip Address");
    printf("\nnumber of networks : %f",pow(2,14));
    printf("\nnumber of addresses in network : %f",pow(2,16)-2);
    printf("\n first address is: ");
    printf("%3d.%3d.0.0",ipAddress[0],ipAddress[1]);
    printf("\n last address is: ");
    printf("%3d.%3d.255.255",ipAddress[0],ipAddress[1]);
  }

  if(ipAddress[0]>=191 && ipAddress[0]<=223){
    printf("\n Class C Ip Address");
    printf("\nnumber of networks : %f",pow(2,21));
    printf("\nnumber of addresses in network : %f",pow(2,8)-2);
    printf("\n first address is: ");
    printf("%3d.%3d.%3d.0",ipAddress[0],ipAddress[1],ipAddress[2]);
    printf("\n last address is: ");
    printf("%3d.%3d.%3d.255",ipAddress[0],ipAddress[1],ipAddress[2]);
  }
  if(ipAddress[0]>=224 && ipAddress[0]<=239){
    printf("\n Class D Ip Address(multicast address)");
}
if(ipAddress[0]>=240 && ipAddress[0]<=255){
    printf("\n Class E Ip Address(Special address)");
}
return 0;
}
