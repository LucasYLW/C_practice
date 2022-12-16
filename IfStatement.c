#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool true_or_false = true;
    int temp;
    printf("guess 1 or 0?");
    scanf("%d", &temp);
    true_or_false = temp;

    if (true)
    {
        printf("No,shoule be 0\n");
    }
    return 0;
}