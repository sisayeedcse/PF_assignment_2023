#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 50
int main(){
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    char mergedStr[MAX_LENGTH * 2+1];
    int i,j;
    printf("Enter the first string: ");
    scanf("%[^\n]s",str1);
    getchar();
    printf("Enter the second string: ");
    scanf("%[^\n]s", str2);
    i=0; j=0;
    while(str1[i] != '\0'){
        mergedStr[i] = str1[i];
        i++;
    }
    while(str2[j] != '\0'){
        mergedStr[i] = str2[j];
        i++;
        j++;
    }
    mergedStr[i] = '\0';
    printf("Merged string : %s\n", mergedStr);

return 0;
}
