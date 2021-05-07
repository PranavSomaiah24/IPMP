void inplaceTranspose(int *A, int r, int c)
{
    int size = r*c - 1, t, next,  startCycle, i; 
    bitset<128> b; 
  
    b.reset();
    b[0] = b[size] = 1;
    i = 1; 
    while (i < size)
    {
        startCycle = i;
        t = A[i];
        do
        {
            next = (i*r)%size;
            swap(A[next], t);
            b[i] = 1;
            i = next;
        }
        while (i != startCycle);
        for (i = 1; i < size && b[i]; i++)
            ;
        cout << endl;
    }
}