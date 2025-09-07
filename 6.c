#include <stdio.h>
struct EngiinButarhai
{
    int d, n;
};
typedef struct EngiinButarhai EngiinButarhai;
// nemeh uildel
EngiinButarhai add(EngiinButarhai a, EngiinButarhai b)
{
    EngiinButarhai c;
    c.d = a.d * b.n + b.d * a.n;
    c.n = a.n * b.n;
    printf("nemeed garsan hariu\n");

    return c;
}
EngiinButarhai sub(EngiinButarhai a, EngiinButarhai b)
{
    EngiinButarhai c;
    c.d = a.d * b.n - b.d * a.n;
    c.n = a.n * b.n;
    printf("hasaad garsan hariu\n");

    return c;
}
EngiinButarhai mult(EngiinButarhai a, EngiinButarhai b)
{
    EngiinButarhai c;
    c.d = a.d * b.d;
    c.n = a.n * b.n;
    printf("Urjeed garsan hariu\n");

    return c;
}
EngiinButarhai div(EngiinButarhai a, EngiinButarhai b)
{
    EngiinButarhai c;
    c.d = a.d * b.n;
    c.n = a.n * b.d;
    printf("huvaagaad garsan hariu\n");
    return c;

    ;
}
void print(EngiinButarhai a)
{

    printf("Huvaari:%d \n Hurtver:%d\n", a.n, a.d);
};
int main()
{
    EngiinButarhai a, c;
    printf("garaas  engiin butarhai oruulna uu: ");
    scanf("%d%d", &a.d, &a.n);
    printf("garaas  engiin butarhai oruulna uu: ");
    scanf("%d%d", &c.d, &c.n);
    // nem

    print(add(a, c));
    // has
    print(sub(a, c));
    // urj
    print(mult(a, c));

    // huvaa
    print(div(a, c));

    return 0;
}