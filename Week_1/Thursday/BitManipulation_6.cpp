//Add two int without arithmetic operators

int addAdderLogic(int x, int y)
{
    if (y == 0)
        return x;
    else
        return Add( x ^ y, (x & y) << 1);

}