#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int ans;
    if (a>b && a>c && a>d)
    {
        ans=a;
    }
     if (b>a && b>c && b>d)
    {
        ans=b;
    }
     if (c>b && c>a && c>d)
    {
        ans=c;
    }
     if (d>b && d>c && d>a)
    {
        ans=d;
    }
    return ans;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
