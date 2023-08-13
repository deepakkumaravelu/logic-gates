int AND(int x, int y)
{
    if ((x + y) == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int OR(int x, int y)
{
    if (x == 0 && y == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int NOT(int x)
{
    (x == 0) ? printf("1") : printf("0");
}
int NAND(int x, int y)
{
    (AND(x, y) == 0) ? printf("1") : printf("0");
}
int NOR(int x, int y)
{
    (OR(x, y) == 0) ? printf("1") : printf("0");
}
int XOR(int x, int y)
{
    (x == y) ? printf("0") : printf("1");
}
int XNOR(int x, int y)
{
    (x == y) ? printf("1") : printf("0");
}