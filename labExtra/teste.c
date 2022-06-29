#include <stdio.h>
#include <stdlib.h>

int search(int *m, int i,int size, int val){
    if (m[i] == val)
        return 1;
    if (i == size - 1)
        return 0;
    return search(m, i + 1, size, val);
}

int main(){
    int lin, col, size, *m;
    char c;
    scanf("%d %d", &lin, &col);
    size = lin * col;
    
    m = (int*) malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
        scanf("%d", &m[i]);
    getchar();

    while (scanf("%c", &c) != EOF){
        int val, x, y;
        if (c == 'p'){
            scanf("%d", &val);
            printf("%d\n", search(m, 0, size, val));
        }
        else if (c == 'e'){
            scanf("%d %d %d", &x, &y, &val);
            int pos = (x * col) + y;
            m[pos] = val;
        }
    }
    return 0;
}