#include <stdio.h>
#include <stdlib.h>

bool isPalindrome(int x) {
    if(x<0 || x!=0 && x%10==0)
    return false;
    int rev=0;
    while(x>rev){
        rev = rev*10 + x%10;
        x/=10;
    }
    return (x==rev || x==rev/10);
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%d",rev);
}
