//open and write file
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
    int iRet=0;

    printf("Enter the name of file that you want to open from current directory : \n");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR | O_APPEND);

    if(fd==-1)
    {
        printf("unable to open %s file \n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",FileName);
        
        printf("Enter the data that you want to write in to the file : \n");
        scanf(" %[^'\n']s",Arr);

        iRet=write(fd,Arr,strlen(Arr));
        printf("%d bytes gets successfully written into the file \n",iRet);
        
        close(fd);
    }

    return 0;
}