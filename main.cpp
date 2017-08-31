#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void main();
void fibonacci();
int rusltado();

void main(){
	void fibonacci();
	int rusltado();
}


int main(int argc, char** argv)
{
	
	int i,j;
	int filas, columnas;
	int fibo;
	int num = 0;
	int matriz[0][0] = fibo (num);
	int *p_matriz = &matriz[0][0];
	
	
	printf("ingrese el numero de filas: ");
	scanf("%d", &filas);
	
	printf("ingrese el numero de columnas: ");
	scanf("%d", &columnas);
	
	
	for(i = 0; i < filas; i++)
	{
		for(j = 0; j < columnas; j++)
		{
			if(fibo + i != 0)
			{
				fibo(num) = (fibo(num - 2 ) + (fibo(num - 1));
			    printf("%d    ", fibo + i);  
			}	
		}
		printf("\n");
	}
	
}

int resultado(int n){
    if(n == 0 || n == 1)
    {
       return n;
   	}
    else
    {
    	return fibo(n - 2) + fibo(n - 1);
	}   
}

