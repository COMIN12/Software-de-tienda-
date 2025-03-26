#include <stdio.h>

int main(){

    int id,stock,cantidad,opciones;
    float precio,ganacias=0;
    char nombre[30];

    printf("Ingrese el ID del producto");
    scanf("%d",&id);
    getchar();

    printf("Ingrese el nombre del producto");
    fgets(nombre,sizeof(nombre),stdin);

    printf("Ingrese la cantidad inicla en stock");
    scanf("%d",&stock);

    printf("Ingrese el precio unitario del producto");
    scanf("%f",&precio);

    do
    {
        printf("\n Menu de Opciones: \n");
        printf("1. Vender Producto \n");
        printf("2. Restablecer producto \n");
        printf("3. Mostrar inforacion del producto\n");
        printf("4. Mostrar total de ganancias\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d",&opciones);

        switch (opciones)
        {
        case 1:
            printf("Ingrese la cantodad a vender:");
            scanf("%d",&cantidad);

            if(cantidad > 0 && cantidad <= stock){
                stock-= cantidad;
                ganacias += cantidad * precio
                printf("Venta realizada con exito.\n");
            } else {
                printf("Stock Insuficiente o cantidad invalidada. \n");
            }
            break;
        case 2:
            printf("Ingrse la cantidad a agregar en stock");
            scanf("%d",&cantidad);

            if (cantidad > 0 )
            {
                stock+= cantidad;
                printf("Stock actualizado con exito. \n");
            } else {
                printf("Cantidad invalidad. \n");
            }
            break;
        case 3:
            printf("\n Informacion del producto: \n");
            printf("ID: %d\n",id);
            printf("Nombre %s",nombre);
            printf("Stock disponible %d\n",stock);
            printf("Precio unitario %f\n",precio);
        break;
        case 4:
            printf("Total de las ganacias: &.2f\n",ganacias);
        break;
        case 5:

        default:
            break;
        }

    } while (opciones!5);
    

}
