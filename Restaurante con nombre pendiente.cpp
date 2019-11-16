#include <stdio.h>

void menu ();
void orden ();
void recibo ();
void comentarios ();
//void orden66 ();

int main (){
	
	menu ();
	
	return 0;
}
void menu (){
	int opc;
	printf("Restaurante con nombre pendiente alv \n");
	do{
		printf("Seleccione una opcion: \n");
		printf(" 1.-Escojer orden \n 2.-Hacer recibo \n 3.-Dejar comentarios \n 4.-Salir \n");
		scanf("%i", &opc);
		switch (opc){
			case 1:
				orden ();
				break;
			case 2:
				recibo ();
				break;
			case 3:
				comentarios ();
				break;
			case 4:
				printf("Hasta luego \n");
				break;
			/*case 66:
				orden66 ();
				break;*/
			default:
				printf("Opcion invalida, por favor seleccione otra opcion \n");
				break;
		}
		
	}while (opc != 4);
}
void orden (){
	printf("Aqui van las ordenes \n");
}
void recibo (){
	printf("Aqui se hace el recibo \n");
}
void comentarios (){
	printf("Aqui van los comentarios \n");
}
/*void orden66 (){
	printf("Comandante Cody, ha llegado el momento, ejecute la orden 66 \n");
}*/

