#include<stdio.h> 
#include<string.h> 
#include<ctype.h>
#define MAX_LIMIT 100

int encript();


int main()
{
    return encript();
}


int encript()
{
    char input[MAX_LIMIT];
    char store[MAX_LIMIT];
    int i;
    int key;
    
    
    printf("Enter the text to decript: \n");
    fgets(input, MAX_LIMIT, stdin);
    printf("Enter the key: \n");
    scanf("%d", &key);

    for(i = 0; i < strlen(input); i++)
    {
        store[i] = input[i] - key;
        
    }

    printf("The encripted text is: \n");
    for(i = 0; i < strlen(input); i++)
    {
        printf("%c", store[i]);
    }

    printf("\n");


    return 0;
    
}

