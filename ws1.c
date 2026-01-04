#include <stdio.h>
int main() {
    int a,b,c,d;
    int max,second;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    max = (a > b ? a : b);
    max = (max > c ? max : c);
    max = (max > d ? max : d);

    second = (a != max ? a : b);
    second = ((b != max && b>second) ? b : second);
    second = ((c != max && c>second) ? c : second);
    second = ((d != max && d>second) ? d : second);
    printf("%d",second);

    return 0;
}
