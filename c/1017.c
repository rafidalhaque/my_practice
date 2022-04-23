#include <stdio.h>
 
int main() {
 
    int t, as, d;
    float l;
    
    scanf("%d\n%d", &t, &as);
    
    d = t * as; 
    l = (float)d / 12;
    
    printf("%.3lf\n", l);
    
    return 0;
}
