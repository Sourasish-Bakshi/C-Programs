#include <stdio.h>
int main() {
    int i,t1 = 0, t2 = 1, nextTerm,j;
    for (i = 1; i <= 9; i++) 
    {
        printf("%d  ", t1);
       if (i==1)
        printf("\n");
     if (i==3)
        printf("\n");
    if (i==6)
        printf("\n");
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
