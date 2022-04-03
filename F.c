#include <stdio.h>
#include <string.h>

char *changestring(char *s){
	int i=0, j=0;
	while (s[i]){
		if (s[i] != ' ')
          s[j++] = s[i];
		i++;
	}
	s[j] = '\0';
	int len = strlen(s);
    int temp,k,l=0;
    for(k=0; k<len; k++){
        for(l=0; l<(len-1); l++){
            if(s[l]>s[l+1]){
                temp = s[l];
                s[l] = s[l+1];
                s[l+1] = temp;
            }
        }
    }
    return s;
}

void doprint(int s[26][26], int n){
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            if(i==j){
                if(s[i][j]>=n)
                    printf("%c = %d\n",i+65,s[i][j]);
                }
                else{
                    if(s[i][j]>=n)
                        printf("%c%c = %d\n",i+65,j+65,s[i][j]);
                }
        }
    }
}

void fill(char string[],int matrix[26][26]){
    for(int i=0;string[i];i++){
                matrix[string[i]-65][string[i]-65]+=1;
                for(int j=i+1;string[j];j++)
                    matrix[string[i]-65][string[j]-65]+=1;
            }
}

int main(){
    int n;
    char string[52];
    int matrix[26][26];
    int i,j;
    for(i=0;i<26;i++){
        for(j=0;j<26;j++)
            matrix[i][j]=0;
    }
    if(scanf("%d",&n)==1){
        while(fgets(string,52,stdin)!=NULL){
            changestring(string);
            fill(string,matrix);
        }
    doprint(matrix,n);
    return 0;
    }
}