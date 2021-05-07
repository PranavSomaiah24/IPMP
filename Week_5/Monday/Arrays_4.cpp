// Rotate matrix by 90 degress
// First row to last column and so on
void rotate(unsigned int *pS, unsigned int *pD, unsigned int row, unsigned int col) 
{ 
    unsigned int r, c; 
    for (r = 0; r < row; r++) 
    { 
        for (c = 0; c < col; c++) 
        { 
            *(pD + c * row + (row - r - 1)) = *(pS + r * col + c); 
        } 
    } 
} 