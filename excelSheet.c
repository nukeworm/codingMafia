#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char s[10];
    scanf("%s",&s);
    int len=strlen(s),extr;
    long long int per=1,ind=0;
    for(int i=26;i>26-(len-1);i--)
        per=per*i;
    if(len!=1)
    extr=((int)s[len-1])-64;
    ind=per+extr;
    printf("%lld",ind);
}
