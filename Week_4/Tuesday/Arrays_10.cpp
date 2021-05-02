float findWater(int i, int j, float X)
{
    if (j > i)
    {
        printf("Incorrect Input as ith row has max j glasses");
        exit(0);
    }
    float glass[i * (i + 1) / 2];
    memset(glass, 0, sizeof(glass));
    int glassNo = 0;
    glass[glassNo] = X;
    for (int row = 1; row <= i ; ++row)
    {
        for (int col = 1; col <= row; ++col, ++glassNo)
        { 
            X = glass[glassNo];
            glass[glassNo] = (X >= 1.0f) ? 1.0f : X;   
            X = (X >= 1.0f) ? (X - 1) : 0.0f;
            glass[glassNo + row] += X / 2;
            glass[glassNo + row + 1] += X / 2;
        }
    }
    return glass[i*(i-1)/2 + j - 1];
}