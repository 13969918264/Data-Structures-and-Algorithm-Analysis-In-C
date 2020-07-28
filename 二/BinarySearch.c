/*
    赵子豪@20200728
*/
/*  对分查找    */
int
BinarySearch( const ElementType A[ ], ElementType X, int N )
{
    int low, Mid, High;
    
    low = 0; High = N - 1;
    while ( Low <= High )
    {
        Mid = (Low + High) / 2;
        if( A[mid] < X)
            Low = Mid + 1;
        else if( A[ Mid ] > X )
            High = Mid - 1;
        else
            return Mid;         /*  Found   */
    }
    
    return NotFound;            /*  NotFound is defined as -1   */
}