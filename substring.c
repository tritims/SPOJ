#include <stdio.h>

int substring(char* main, char* sub){
    // i -> tracker for main string 
    // j -> tracker for sub string
    int i=0,j=0;
    while(main[i] != '\0'){
        if(main[i] == sub[j]){
            j++;
            if(sub[j] == '\0')
                return 1;
        }else {
            j=0;
        }
        i++;
    }
    
    return 0;
}

int main()
{
   int a = substring("Hello", "");
   
   printf("%d", a);

    return 0;
}