#include <stdio.h>
#include <string.h>
#define TAM 1500

int main()
{
    char str[TAM], letra[2];
    
    while (1)
    {
        int tamanho = 0;
        int tautograma = 1;
        int i;
        
        fgets(str, 1500, stdin);
        
        //for(i=0; str[i]!='\0'; i++) tamanho++; // tamanho usando for;
        tamanho = strlen(str); //alternativa correta pra descobrir o tamanho;
        
        if (str[0] == '*') break;
        
        else
        {
            
            if(str[0]>=65 && str[0]<=90)
            {
                letra[0] = str[0]+32;
            }
            
            else if(str[0]>=97 && str[0]<=122)
            {
                letra[0] = str[0]-32;
            }
            
            for(i=1; i<tamanho; i++)
            {
                if (str[i] == ' ')
                {
                    if(str[i+1]==str[0] || str[i+1]==letra[0])
                    {
                        continue;
                    }
                    
                    else
                    {
                        tautograma = 0;
                        break;
                    }
                }
            }
            
            if(tautograma == 1) printf("Y\n");
            else printf("N\n");
        }
    }
    
    return 0;
}