#include <stdio.h>
#include<stdlib.h>
struct clientes{
	char nombre1[30];
	char nombre2[30];
	char apellido1[25];
	char apellido2[25];
	char rfc[14];
	char ciudad[25];
	int cp[5];
	char direccion[50];
	char correo[60];
	int numero[11];
};
struct productos{
	char nombre[30];
	char presentachion[15];
	char proveedor[30];
	int long idproducto[13];

	
};
struct proveedor{
	char nombreRazon[50];
	char rfc[13];
	char direccion[50];
	char ciudad[20];
	int cp[5];
	char correo[50];
	int long numeroP[11];
};


void menu(int n){
	int folio;
	switch(n){
	case 1:
	break;
	case 2:{
		printf("introduce el folio del cliente\n");
		fflush(stdin);
		scanf("%d",&folio);
		nuevoCliente(folio);
	}
	break;
	case 3:
	break;
	case 4:
	break;
	case 5:
	break;
	case 6:
	break;
	case 7:
	break;
	case 8:
	break;
	case 9:
	break;	
	}
}
int main(int argc, char *argv[]) {
int opcion;
lebel:
printf("\n\n\n\n");
printf("                              Bienvenido al punto de venta\n          ");
printf("\n\n\n\n\n\n\n");
printf("        Seleccione la opcion deseada\n");
printf("        pres 1 para ventas\n");
printf("        pres 2 para registrar un cliente\n");
printf("        pres 3 para registrar un proveedor\n");
printf("        pres 4 para dar de alta un producto\n");
printf("        pres 5 para recibir mercancia\n");
printf("        pres 6 para checar existencias\n");
printf("        pres 8 para facturar\n");
printf("        pres 9 para SALIR\n");
printf("\n\n\n\n\n");
printf("--------------------------------------------RISC-SOLUTIONS-&-DEVELPMENTS\n");
fflush(stdin);
scanf("%d",&opcion);
while(opcion>=1 && opcion <=7){
menu(opcion);}
goto lebel;



	
	return 0;
}

