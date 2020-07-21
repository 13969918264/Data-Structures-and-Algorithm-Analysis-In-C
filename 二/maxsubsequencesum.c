/*
    maxsunsequence.c
*/

/*
    �㷨һ
int 
MaxSubSequenceSum( const int a[], int N)
{
    int ThisSum, MaxSum, i, j, k;
    
    MaxSum = 0;
    for ( i = 0; i < N; i++ )
        for ( j = i; j < N; j++ )
        {
            ThisSum = 0;
            for ( k = j; k < N; k++ )
                ThisSum += A[k];
                
                if (ThisSum > MaxSum )
                    MaxSum = ThisSum;
        }
    }
    return MaxSum;
}
*/