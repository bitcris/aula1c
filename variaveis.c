//Biblioteca
#include <stdio.h>
main (){
  
  
 //Variáveis (int = inteiro(%d)) (float = flutuante(%f)) (char = string(%c)) 
int base;
int altura;
int area;

  
//Impressão na tela pelo método (printf)  
printf("Valor da base: ");
  
//Capturando valor digitado pelo método (scanf)  
scanf("%d", &base);

printf("Valor da altura: ");
scanf("%d", &altura);


area = base*altura/2;
printf("%d", area);

} 
//Calculadora para calcular a área de um triangulo
