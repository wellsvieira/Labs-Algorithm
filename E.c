#include <stdio.h>
#include <string.h>
#define Max 10000

int main(){
    int maxs = 1,i=0;
    int down, up;
    char str[Max];
    if(fgets(str,Max,stdin)!=NULL){
        int n = strlen(str);
        for (i = 0; i < n; i++) {
        down = i - 1;
        up = i + 1;
        for(;up < n && str[up] == str[i];up++);
        for(;down >= 0 && str[down] == str[i];down--);                  
        for(;down >= 0 && up < n && str[down] == str[up];down--,up++);
        int len = up - down - 1;
        if (maxs < len) {
            maxs = len;
        }
        }
    printf("%d\n",maxs);
    }
    return 0;
}