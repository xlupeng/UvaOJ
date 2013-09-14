#include <stdio.h>

int main(){
    long a,b;
    while(scanf("%ld%ld",&a,&b)!= EOF){
        printf("%ld\n", (b-a) > 0 ? (b-a) : (a-b));
    }
    return 0;
}