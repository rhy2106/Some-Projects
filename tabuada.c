#include <stdio.h>

int main() 
{
	int k, j;
	
	printf("coloque dois numeros separados por espaco: ");
	scanf("%d %d", &k, &j);
	
	if( j < k ) {
		printf("O segundo numero deve ser maior que o primeiro\n");
		return 1;
	} else if(j > 99) {
    	printf("O numero eh muito grande!\n");
		return 1;
    } else if(k < 1) {
   		printf("O numero nao pode ser menor que 1!\n");
		return 1;
    } else
    	printf("+---------------+\n| Tabuada\t|\n");
	
	for(; k <= j; k++)
	{
        printf("+---------------+\n");
        int a;
        for(a = k; a <= k * 10; a+=k)
            printf("| %d x %d = %d\t|\n", a / k, k, a);
    }
    
	printf("+---------------+");
	return 0;
}
