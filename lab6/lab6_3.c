#include <stdio.h>
typedef long long unsigned int llu;

llu Primo(llu n){
    for(llu i = 2 ; i * i <= n ; ++i)
        if (!(n % i))
            return 0;
    return 1;
}

llu soma_primos(llu n){
    llu i = 0, num = 2, soma = 0;
    while(n){
        if (Primo(num)){
            soma += num;
            n--;
        }
        num++;
    }
    return soma;
}
int main(){
    llu val;
    scanf("%lld", &val);
    printf("%lld\n", soma_primos(val));
    return 0;
}