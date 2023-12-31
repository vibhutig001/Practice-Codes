
//display character from starting point
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

void Display(char FName[], int iSize) 
{
    int fd = 0;
    char Arr[100];
    int iSum = 0;

    fd = open(FName, O_RDONLY); 

    if (fd == -1) 
    {
        printf("Unable to open %s file\n", FName);
    } 
    else 
    {
        printf("%s opened successfully with file descriptor %d\n", FName, fd);

        ssize_t bytesRead;
        while ((bytesRead = read(fd, Arr, sizeof(Arr))) > 0) 
        {
            for (int i = 0; i < bytesRead; i++) 
            {
                for(int j=1;j<=iSize;j++)
                {
                    printf("%s",j);
                }
            }
        }

        if (bytesRead == -1) 
        {
            printf("Error reading file\n");
        }

        close(fd);
    }

}

int main() {
    char FileName[30];
    int iRet = 0;
    int Value;

    printf("Enter file Name: ");
    scanf("%s", FileName);

    printf("Enter starting point : ");
    scanf(" %c", &Value); 

    Display(FileName, Value);

    return 0;
}
