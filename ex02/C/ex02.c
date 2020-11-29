#include <stdio.h>

size_t strlen(char* pointer);

int main(int argc, char* argv[])
{
    char str[20] = {0};
    int strLeng = 0;

    printf("What is the input String? ");
    scanf("%s", str);
    
    strLeng = strlen(str);

    printf("%s has %d chracters.", str, strLeng);
    
    return 0;
}


size_t strlen(char* pointer)
{
    size_t returnValue = 0;

    while(pointer[returnValue] != '\0')
    {
       returnValue++; 
    }

    return returnValue;
}