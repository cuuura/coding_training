#include <stdio.h>
#include <string.h>

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