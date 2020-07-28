/*
    maxsunsequence.c
*/

/*
    �㷨һ
int 
MaxSubsequenceSum( const int a[], int N)
{
    int ThisSum, MaxSum, i, j, k;
    
    MaxSum = 0;
    for ( i = 0; i < N; i++ )
        for ( j = i; j < N; j++ )
        {
            ThisSum = 0;
            for ( k = j; k < N; k++ )
                ThisSum += A[k];
                
                if ( ThisSum > MaxSum )
                    MaxSum = ThisSum;
        }
    }
    return MaxSum;
}
*/

/*  
    �㷨��
int
MaxSubsequenceSum( const int A[], int N)
{
    int ThisSum, MaxSum, i, j;
    
    MaxSum = 0;
    for ( i = 0; i < N; i++ )
    {
        ThisSum = 0;
        for ( j = i; j < N; j++ )
        {
            ThisSum +=A[ j ];
            
            if ( ThisSum > MaxSum )
                MaxSum = ThisSum;
        }
    }
    
    return MaxSum;
}
*/

/*
    �㷨��
static int
MaxSubSum( const int A[], int left, int right )
{
    int MaxLeftSum, MaxRightSum;
    int MaxleftBorderSum, MaxRightBorderSum;
    int LeftBorderSum, RightBorderSum;
    int Center, i;
    
    if( Left == Right)          /*  base case   */
        if( A[ Left ] > 0 )
            return A[ Left ];
        else
            return 0;
    Center = ( Left + Right ) / 2;
    MaxLeftSum = MaxSubSum(A, Left, Center );
    MaxRightSum = MaxSubSum(A, Center + 1, Right );

    MaxleftBorderSum = 0;
    LeftBorderSum = 0;
    for ( i = Center; i >=Left; i--)
    {
        LeftBordrSum += A[ i ];
        if( LeftBorderSum > MaxLeftBorderSum )
            MaxLeftBorderSum = LeftBorderSum;
    }

    MaxRightBorderSum = 0;
    RightBorderSum = 0;
    for ( i = Center + 1; i <= Right; i++ )
    {
        RightBorderSum += A[ i ];
        if( RightBorderSum > MaxRightBorderSum )
            MaxRightBorderSum = RightBorderSum;
    }

    return Max3( MaxLeftSum, MaxRightSum, MaxleftBorder + MaxRightBorderSum );
}

int 
MaxSubsequenceSum( const int A[], int N )
{
    return MaxSubSum( A, 0, N - 1 );
}
*/

/*
    �㷨��
int
MaxSubSequenceSum( const int A[ ], int N )
{
    int ThisSum, MaxSum, j;
    
    ThisSum = MaxSum = 0;
    for( j = 0; j < N; j++ )
    {
        ThisSum += A[ j ];
        
        if( ThisSum > MaxSum )
            MaxSum = ThisSum;
        else if ( ThisSum < 0 )
            ThisSum = 0;
    }
    
    return MaxSum;
}
*/