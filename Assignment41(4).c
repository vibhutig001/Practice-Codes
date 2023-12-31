
#include<stdio.h>
#include<stdlib.h>//standard library
#include<unistd.h>//universal standard
#include<fcntl.h>//function control
#include<string.h>

int main()
{
    char FileName[30];
    int fd=0;
    char Arr[100]={'\0'};
    int iSize=0;
    int iRet=0;

    printf("Enter the name of file that you want to open from current directory : \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);
 
    if(fd == -1)
    {
        printf("unable to open %s file \n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",FileName);
    
        while(iRet = read(fd,Arr,sizeof(Arr)) != 0)
        {
            iSize=iSize + iRet;
        }
        printf("File contains %d bytes in it \n",iSize);
        close(fd);
    }

    return 0;
}