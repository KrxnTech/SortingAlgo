#include <stdio.h>

int main() {
    int n;
    int i;
    int j;
    int temp;

    printf("ENTER ARRAY SIZE : ");
    scanf("%d", &n);

    int a[n]; 

    printf("ENTER VALUES IN ARRAY : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // SORTING LOGIC 
    for (i=n; i>0; i--) {
        for (j=0; j<i-1; j++) {
            // IF LOGIC 
            if (a[j]>a[j+1]) {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    // PRINT 
    printf("SORTED ARRAY RESULT : ");
    for (i=0; i<n; ++i) {
        printf("%d ",a[i]);
    }

    return 0;
}
