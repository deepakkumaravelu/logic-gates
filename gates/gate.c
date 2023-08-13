#include <stdio.h>
int AND(int x, int y)
{
    return (((x + y) == 2) ? 1 : 0);
}
int OR(int x, int y)
{
    return ((x == 0 && y == 0) ? 0 : 1);
}
int NOT(int x)
{
    return ((x == 0) ? 1 : 0);
}
int NAND(int x, int y)
{
    return ((AND(x, y) == 0) ? 1 : 0);
}
int NOR(int x, int y)
{
    return ((OR(x, y) == 0) ? 1 : 0);
}
int XOR(int x, int y)
{
    return ((x == y) ? 0 : 1);
}
int XNOR(int x, int y)
{
    return ((x == y) ? 1 : 0);
}
int main()
{
    int a, b, c;
    printf("Enter gate inputs:\n");
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("1:AND\n2:NOT\n3:OR\n4:NAND\n5:NOR\n6:XOR\n7:EXNOR\n");
    while (1)
    {
        printf("\ngate no:");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("\nAND=%d", AND(a, b));
            break;
        case 2:
            printf("\nNOT=%d", NOT(a));
            break;
        case 3:
            printf("\nOR=%d", OR(a, b));
            break;
        case 4:
            printf("\nNAND=%d", NAND(a, b));
            break;
        case 5:
            printf("\nNOR=%d", NOR(a, b));
            break;
        case 6:
            printf("\nXOR=%d", XOR(a, b));
            break;
        case 7:
            printf("\nXNOR=%d", XNOR(a, b));
            break;
        default:
            printf("invalid input");
            break;
        }
        if (c >= 8)
        {
            break;
        }
    }
}
