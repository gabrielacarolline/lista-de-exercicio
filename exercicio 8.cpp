#include <stdlib.h>
#include<locale.h>
#include <stdio.h>
int main(){
    setlocale(LC_ALL,"");
    
    int i, res=0;  
   
    for (i=1; i<=200; i++){
        
        if(i%2==0){
            res= res+i;
        }
    }
    
     printf ("A soma dos primeiros 100 números pares é : %d", res);
     
    
    return 0;
}