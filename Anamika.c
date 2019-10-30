#include <stdio.h>
int main()
{
    int n, rev = 0, m;
    printf("Enter an integer: ");
    scanf("%d", &n);
    m = n;
    while( n!=0 )
    {
        int rem;
        rem = n%10;
        rev = rev*10 + rem;
        n =n/10;
    }
    if (m == rev)
        printf("%d is a palindrome",m);
    else
        printf("%d is not a palindrome",m);
    return 0;
}
