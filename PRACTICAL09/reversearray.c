#include <stdio.h>

// DEV PATHAK     ERP - 10453

int main() {
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Reversed array:\n");
    for(i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}

/* OUTPUT
--------------

Enter number of elements: 1
Enter array elements: 2
Reversed array:
2 



*/