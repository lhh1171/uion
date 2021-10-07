#include <stdio.h>

//union data{
//    int n;
//    char ch;
//    double f;
//} ;
union data{
    int n;
    char ch;
    double f;
} a;
int main() {
    printf("%lu\n",sizeof(a));
    a.ch=65;
    printf("%d, %c,%lf\n",a.n,a.ch,a.f);
    a.n=68;
    printf("%d, %c,%lf\n",a.n,a.ch,a.f);
    a.f=69;
    printf("%d, %c,%lf\n",a.n,a.ch,a.f);
    return 0;
}
