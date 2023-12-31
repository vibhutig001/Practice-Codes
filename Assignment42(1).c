#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int CountCapital(char FName[]) 
{
    int fd = 0;
    char Arr[100];
    int iSum = 0;

    fd = open(FName, O_RDONLY); // Open in read-only mode

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
                if (Arr[i] >= 'A' && Arr[i] <= 'Z') 
                {
                    iSum++;
                }
            }
        }

        if (bytesRead == -1) {
            printf("Error reading file\n");
        }

        close(fd);
    }
    return iSum;
}

int main() {
    char FileName[30];
    int iRet = 0;

    printf("Enter file Name: ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);

    printf("Number of capital characters: %d\n", iRet);

    return 0;
}
