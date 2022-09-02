#include<iostream>
#include<string.h>
#include<string>
#include<conio.h>

using namespace std;

int main()
{
	//Use el float para que los precios o costos sean más especificos en las ventas como el caso de los que se ahorran 1 peso.
	int opc, arti, año; // omdifica el caracter d ñ a n
	float precio, total;
	string nom, clasif, caracter, descrip, genero;
	cout << "\t Software Planet \n";
	cout << "\t\t Menu \n";
	cout << "1-Agregar Articulo.\n2-Modificar Articulo.\n3-Eliminar Articulo.\n4-Lista de Articulos Vigentes.\n5-Limpiar Pantalla.\n6-Salir.\n";
	cin >> opc;

	switch (opc)
	{
	case 1://Agregar Articulo, nos permetira almacenar los diferentes catalogos de mi tienda de videojuegos.
		cout << "Ingrese el Numero (codigo) del articulo.\n";
		cin >> arti;
		cout << "Ingrese el Nombre del articulo.\n";
		cin.ignore();
		getline(cin, nom);
		cout << "Introduce el ano del lanzamiento.\n";
		cin >> año;
		cout << "Introduce su calificacion.\n(A/B/B15/C/D)\n";
		cin.ignore();
		getline(cin, clasif);
		cout << "Introduce su caracteristica.\n";
		getline(cin, caracter);
		cout << "Introduce la descripcion.\n";
		getline(cin, descrip);
		cout << "Introduce el genero.\n";
		getline(cin, genero);
		cout << "Introduce el precio unitario.\n";
		cin >> precio;
		total = precio * 1.16; // quiero que imprima el iva y el total separados
		cout << "\nCodigo: " << arti << "\nNombre: " << nom << "\nAno: " << año << "\nCalificacion: " << clasif <<"\nCaracteristica: "<< caracter << "\nDescripcion: " << descrip << "\nGenero: " << genero << "\nPrecio Total: " << total << "\n";
		system("pause");
		return main();

	case 2://Modificar Articulo, permitira al creador modificar ciertos errores que se colocaron tras la introduccion del articulo, como la fecha, el nombre, la calificacion, precio o descripcion.
		cout << "Fuera de servicio.\n";
		break;

	case 3://Eliminar Articulo, con esto hace que cuando una compra esta ya hecho o ya no hay una copia disponible lo dejamos de exponer al seleccionarlo.
		cout << "Fuera de servicio.\n";
		break;

	case 4://Lista de Articulos, nos muestra los articulos colocados o introducidos por el dueño de la pagina.
		cout << "Fuera de servicio.\n";
		break;

	case 5://Limpiar pantalla, una funcion no tan usado, pero en casos donde quieres borrar un guardado o lo escrito anteriormente para concentrarte en lo nuevo es muy beneficioso.
		system("cls");
		return main();
		break;

	case 6://Salir, permite al usuario salir del sistema.
		cout << "Esperamos que vuelvas, gracias por usar la pagina.\n";
		break;

	default:
		cout << "Lo lamento, no encontramos la opcion que colocaste. Vuelve a colocar los que proporcionamos en el menu.\n";
		return main();

	}
}
