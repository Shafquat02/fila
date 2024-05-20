#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i , frequency[256] = {0} ;
   
    printf("Enter your string : ");
    scanf("%s",&str);
   
    for( i = 0 ; i<strlen(str) ; i++)
    {
        if(str[i] != '\0')
        {
            frequency[str[i]]++;
        }
       
    }
    printf("Frequency of each letter : \n");
    for(i =0 ; i< 256 ;i++ )
    {
        if(frequency[i] != 0)
        {
            printf("%c => %d\n", i , frequency[i]);
        }
    }
   
   

    return 0;
}
