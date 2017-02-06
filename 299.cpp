#include <stdio.h>           //  Accepted

int main()
{
    int m, n, array[50], counter, total_swaps, i, j, temp;
    
    scanf("%d", &m);
    
    for(counter = 0; counter < m; counter++)
    {
        scanf("%d", &n);
        
        for(i = 0; i < n; i++)
            scanf("%d", &array[i]);
        
        for(i = 0, total_swaps = 0; i < n; i++)
        {
            for(j = 1; j < n-i; j++)
            {
                if(array[j-1] > array[j])
                {
                    temp = array[j-1];
                    array[j-1] = array[j];
                    array[j] = temp;
                    total_swaps++;
                }
            }
        }
        
        printf("Optimal train swapping takes %d swaps.\n", total_swaps);
    }
    
    return 0;
}