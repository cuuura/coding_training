/**
 * ex01. 인사하기
 */
#include <stdio.h>

int main(int argc, char* argv[])
{
    char name[20] = "";

    printf("What is your name? " );

    scanf("%s", name);

    printf("Hello, %s, nice to meet you!", name);

    return 0;
}