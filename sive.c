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

void nuevocliente(struct clientes *clientesT){
	int folio;
	printf("introduce un folio\n");
	scanf("%d",&folio);
	printf("Introduce el primer nombre\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].nombre1);
		printf("Introduce el segundo nombre\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].nombre2);
		printf("introduce el primer apellido\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].apellido1);
		printf("introduce el segundo apellido\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].apellido2);
		printf("Introduce el RFC del cliente\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].rfc);
		printf("Introduce la ciudad\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].ciudad);
		printf("Introduce el codigo postal\n");
		fflush(stdin);
		scanf("%d",clientesT[folio].cp);
		printf("introduce la direccion\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].direccion);
		printf("Introduce el e-mail\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].correo);
		printf("Introduce el numero\n");
		fflush(stdin);
		scanf("%d",clientesT[folio].numero);
	}
int menu(){
	int n;
	scanf("%d",&n);
	return n;}
	

int main(int argc, char *argv[]) {
	 struct clientes clientesT[1000];
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
opcion=menu();
	
	switch(opcion){
	case 1:
	break;
	case 2:{
		
		nuevocliente(clientesT);
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
	default:
	break;	
	}


//goto lebel;



	
	return 0;
}

