#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Func(int);
int main()
{
    int s = 1.5;
    float f = 3.6;
    char c = 'a';
    //Func(3);
    int i = 1;
    while (i)
    {
        if (i == 23)
            break;
        ++i;
    }
    int done = 0;
    if (done == 1)
        printf("OK!\n");
    float average = 9 / 10;
    int t = 0.5;
    float r = 100 / (float)t;
    i = 0;
    while (i < 3)
        printf("%d\t", i++);
    scanf("%c", &c);
    switch (c)
    {
    case 'A':
        printf("The score is 90~100\n"); break;
    case 'B':
        printf("The score is 80~90\n"); break;
    default:
        printf("Wrong input\n"); break;
    }
    unsigned short playerIDs[5] = { 101,102,103,104,105 };
    for (int i = 0; i <= 4; i++)
        printf("Player ID is: %d\t", playerIDs[i]);
    return 0;
}



