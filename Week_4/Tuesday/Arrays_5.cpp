//Find element in row  and cloumn wise sorted 2d array in linear time 

int matSearch (int N, int M, int matrix[][M], int x)
{
    
    int i=N-1,j=0;
    
    while(i>=0 && i<N && j>=0 && j<M){
        if(matrix[i][j]==x){
            return 1;
        }else
        if(x>matrix[i][j])
            j++;
        else
            i--;
    }
    return 0;
    
}