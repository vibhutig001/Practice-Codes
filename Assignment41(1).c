//from user open the file
#include<stdio.h>
#include<stdlib.h>//standard library
#include<unistd.h>//universal standard
#include<fcntl.h>//function control

int main()
{
    char FileName[30];
    int fd=0;

    printf("Enter the name of file that you want to open from current directory");
    scanf("%s",FileName);

    fd=open(FileName,O_RDWR);

    if(fd==-1)
    {
        printf("unable to open %s file \n",FileName);
    }
    else
    {
        printf("%s gets opened successfully with file descriptor %d\n",FileName);
        close(fd);
    }

    return 0;
}