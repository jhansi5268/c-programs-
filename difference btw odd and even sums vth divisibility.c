#include <stdio.h>

int main()
 {
    int n, k, i, even_sum = 0, odd_sum = 0,differ;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("\n Enter a number to check divisibility by: ");
    scanf("%d", &k);
    printf("\nNumbers from 1 to %d which are divisible by %d:\n", n, k);
    for (i = 1; i <= n; i++)
	 {
        if (i % k == 0)
		 {
            printf("%d ", i);
            if (i % 2 == 0)
			 {
                even_sum += i;
            } else
			 {
                odd_sum += i;
            }
        }
    }
    printf("\nsum of odd numbers : %d\n", odd_sum);
    printf("\nSum of even numbers: %d\n", even_sum);
    differ=odd_sum-even_sum;
    printf("\ndifference between odd and even sums is : %d",differ);
    return 0;
}
