void stockBuySell(int price[], int n)
{
    if (n == 1)
        return;

    int i = 0;

    while (i < n - 1) {

        while ((i < n - 1) && (price[i + 1] <= price[i]))
            i++;

        if (i == n - 1)
            break; 

        int buyStock = i++;
        
        while ((i < n) && (price[i] >= price[i - 1]))
            i++;

        int sellStock = i - 1;
        cout<<buy<<"->"<< sellStock << endl;
    }
}