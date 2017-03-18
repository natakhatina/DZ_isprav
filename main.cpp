#include <iostream>

int main() {
    int a=12;
    int b=1;
    char m;
    scanf("%c",&m);
    int ans;
    switch (m) {
        case '+': ans = a + b;printf ("%d\n",ans);break;
        case '-': ans = a - b;printf ("%d\n",ans);break;
        case '*': ans = a * b;printf ("%d\n",ans);break;
        case '/': ans = a / b;printf ("%d\n",ans);
        default: ans=(a+b)/a/b;printf ("%d\n",ans);
    }
    //printf ("%d\n",ans);
    return 0;
}