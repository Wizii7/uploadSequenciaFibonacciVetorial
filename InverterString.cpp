#include<stdio.h>
#include<string.h>
#include<stdlib.h>    

main(){
       char string[50],auxiliar[50];
       int a,b;
       printf("Digite a frase que sera invertida: ");
       gets(string);  
       b=strlen(string)-1; 
       for(a=0;string[a]!='\0';a++){
       auxiliar[b]=string[a];
       b--;     
       }
       auxiliar[a]='\0';
       strcpy(string,auxiliar);
       printf("\n\nA frase inversa e:\n%s\n\n",string);
return 0;
}
