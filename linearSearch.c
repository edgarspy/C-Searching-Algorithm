#include <stdio.h>

int main(void)
{
    int num;
    int book[] = {1, 3, 5, 7, 9};
    
    printf("Input number that you want to search : ");
    scanf("%i", &num);
    
    for (int i = 0; i < 5; i++)
    {
        if (book[i] == num)
        {
            printf("Number Found");
            return 0;
        }
    }
    printf("Number is not Found");
    return 1;
}