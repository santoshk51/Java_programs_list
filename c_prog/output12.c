#include<stdio.h>
int main(){
    union a{

        int i;
        char ch[2];
    };
    union a z={512};
    //output is 0 2
    printf("%d %d\n", z.ch[0], z.ch[1]);
    return 0;
}
