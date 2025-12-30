#include <stdio.h>

// DEV PATHAK     ERP - 10453

int main() {
    int a[100], n, i, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] % 2 == 0)
            sum += a[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}


/* OUTPUT
--------------

Enter number of elements: 1
2
Sum of even elements = 2

*/