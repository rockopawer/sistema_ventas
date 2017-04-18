#include <stdio.h>
#include<stdlib.h>
struct clientes{
	char nombre1[30];
	char nombre2[30];
    char rfc[14];
	char ciudad[25];
	char direccion[50];
	int numero[11];
};
struct productos{
	char nombre[30];
	char presentacion[15];
	int long idproducto[13];
	int existencia;

	
};
struct proveedor{
	char nombreRazon[50];
	char rfc[13];
	char direccion[50];
	char ciudad[20];
	char correo[50];
	int long numeroP[11];
};

int comprobarid(int n,struct productos *productosT){
    int i;
    int A;
	for(i=0;i<1000;i++){
		if(n==*productosT[i].idproducto){
		A=1;}}
		return A;
	}


void nuevoproducto(struct productos *productosT){
	FILE*catalogo;
	catalogo=fopen("catalogo.txt","at");
	int foliop;
	int id;
	int i;
	lebel:
	printf("introduce un folio\n");
	fflush(stdin);
	scanf("%d",&foliop);
	if(*productosT[foliop].idproducto==0){
		printf("introduce el nombre del producto\n");
		fflush(stdin);
		scanf("%s",productosT[foliop].nombre);
		printf("introduce la presentacion \n");
		fflush(stdin);
		scanf("%s",productosT[foliop].presentacion);
		productosT[foliop].existencia=0;
		lebe1:
		printf("introduce el id del producto\n");
		fflush(stdin);
		scanf("%d",&id);
		i=comprobarid(id,productosT);
		if(i!=0){
			*productosT[foliop].idproducto=id;
			fprintf(catalogo,"%d, ",foliop);
			fprintf(catalogo,"%s, ",productosT[foliop].nombre);
			fprintf(catalogo,"%s, ",productosT[foliop].presentacion);
			fprintf(catalogo,"%p, ",productosT[foliop].idproducto);
			fclose(catalogo);}
			else{
				printf("el id ya ha sido asinado\n");
				goto lebe1;}
		}else{
			printf("el folio esta en uso\n");
			goto lebel;}
	}
void nuevocliente(struct clientes *clientesT){
    FILE*clientesTEX;
    clientesTEX=fopen("clientesTEX.txt","at");
	int folio;
	lebel3:
	printf("introduce un folio\n");
	scanf("%d, ",&folio);
	if(&clientesT[folio].numero==0){
	fprintf(clientesTEX,"folio %d",folio);
	printf("Introduce el primer nombre\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].nombre1);
		fflush(stdin);
		printf("Introduce el RFC del cliente\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].rfc);
		printf("Introduce la ciudad\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].ciudad);
		printf("introduce la direccion\n");
		fflush(stdin);
		scanf("%s",clientesT[folio].direccion);
		printf("Introduce el numero\n");
		fflush(stdin);
		scanf("%d",clientesT[folio].numero);
		fprintf(clientesTEX,"%s, ",clientesT[folio].nombre1);
		fprintf(clientesTEX,"%s, ",clientesT[folio].rfc);
		fprintf(clientesTEX,"%s, ",clientesT[folio].ciudad);
		fprintf(clientesTEX,"%s, ",clientesT[folio].direccion);
		fprintf(clientesTEX,"%p, ",clientesT[folio].numero);
		
		fclose(clientesTEX);
	}else{
		printf("el folio ya fue signado\n");
		goto lebel3;}}
int menu(){
	int n;
	scanf("%d",&n);
	return n;}
char buscarp(int n, struct productos *productosT){
	int i;
	char A;
	for(i=0;i<1000;i++){
		if(n==*productosT[i].idproducto){
			A=*productosT[i].nombre;
			}}return A;}	
void recibirT(struct productos *productosT){
	FILE*compras;
	compras=fopen("ingresos.txt","at");
	int z;
	char A;
	int cantidad;
	
	printf("introduce el id del producto\n");
	fflush(stdin);
	scanf("%d",&z);
	A=buscarp(z,productosT);
	printf("%s",&A);
	printf("cuantos productos esta recibiendo?\n");
	fflush(stdin);
	scanf("%d",&cantidad);
	productosT[z].existencia+=cantidad;
	fprintf(compras,"ingresaron %d ,",cantidad);
	fprintf(compras,"%s,",productosT[z].nombre);
	fprintf(compras,"%p",productosT[z].idproducto);
	fclose(compras);
	}
void


checarexis(struct productos *productosT){
	int i,id,k,a;
	lebel5:
	printf("introduce el id\n");
	fflush(stdin);
	scanf("%d",&id);
	for(i=0;i<1000;i++){
		if(id==*productosT[i].idproducto){
			a=productosT[i].existencia;
			printf("%d",a);
			}
		else{
		printf("desea veridicar la existencia de otro prducto?\n");
		printf("presione 1 si es afirmativo o 2 si ya termino\n");
		scanf("%d",&k);
		switch(k){
			case 1:{
			goto lebel5;
			break;}
			case 2:
			break;
			default:
			printf("opcion no valida\n");
			goto lebel5;
			break;}
	}}	

int main(int argc, char *argv[]) {
	 struct clientes clientesT[1000];
	 struct productos productosT[1000];
int opcion;

lebel2:
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
	nuevoproducto(productosT);
	break;
	case 5:{
		recibirT(productosT);
	
	break;}
	case 6:
	{checarexis(productosT);

	break;}
	case 7:
	break;
	case 8:
	break;
	case 9:
	break;
	default:
	break;	
	}


//goto lebel2;



	
	return 0;
}
