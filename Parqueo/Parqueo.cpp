/*Parqueo*/

#include <iostream>				// Libreria
#include <string>				// Libreria
using namespace std;			// Estandar (Para evitar estar poniendo std::)


//Variables Globale
int cantidad_espaciosGlob = 0;
float precio_horaGlob = 0;
int pago_minimoGlob = 0;
int minutos_redondeoGlob = 0;
int minutos_para_salirGlob = 0;
int moneda_1Glob = 0;
int moneda_2Glob = 0;
int moneda_3Glob = 0;
int billete_1Glob = 0;
int billete_2Glob = 0;
int billete_3Glob = 0;
int billete_4Glob = 0;
int billete_5Glob = 0;


void abrir_config()		// Funcion de Configuracion
{
	//Variables de Configuracion temporales
	int cantidad_espacios_t;
	float precio_hora_t;
	int pago_minimo_t;
	int minutos_redondeo_t;
	int minutos_para_salir_t;
	int moneda_1_t;
	int moneda_2_t;
	int moneda_3_t;
	int billete_1_t;
	int billete_2_t;
	int billete_3_t;
	int billete_4_t;
	int billete_5_t;

	int var_1 = 0;		// Variable que define si se acepta o se cancelan los cambios


	cout << "    - Configuracion -" << endl;
	cout << "" << endl;

	cout << "Cantidad de espacios en el parqueo: "; cin >> cantidad_espacios_t;
	cout << "Precio por hora: "; cin >> precio_hora_t;
	cout << "Pago minimo: "; cin >> pago_minimo_t;
	cout << "Redondear el cobro a los siguientes minutos (entero entre 0 y 60): "; cin >> minutos_redondeo_t;
	cout << "Minutos máximos para salir después del pago: "; cin >> minutos_para_salir_t;
	cout << "" << endl;


	cout << "  - Tipos de moneda -" << endl;
	cout << "" << endl;

	cout << "Moneda 1, la de menor denominacion: "; cin >> moneda_1_t;
	cout << "Moneda 2, denominacion siguiente a la anterior: "; cin >> moneda_2_t;
	cout << "Moneda 3, denominacion siguiente a la anterior: "; cin >> moneda_3_t;
	cout << "" << endl;


	cout << "  - Tipos de billetes -" << endl;
	cout << "" << endl;

	cout << "Billete 1, el de menor denominacion: "; cin >> billete_1_t;
	cout << "Billete 2, denominacion siguiente a la anterior: "; cin >> billete_2_t;
	cout << "Billete 3, denominacion siguiente a la anterior: "; cin >> billete_3_t;
	cout << "Billete 4, denominacion siguiente a la anterior: "; cin >> billete_4_t;
	cout << "Billete 5, denominacion siguiente a la anterior: "; cin >> billete_5_t;
	cout << "" << endl;


	cout << "Presione: " << endl;
	cout << "" << endl;

	cout << "1. Guardar valores de configuracion" << endl;
	cout << "2. Cancelar" << endl;

	cin >> var_1;		// Variable que define si el usuario acepta o niega los datos

	switch (var_1)		// Define las intrucciones dependiendo de la decision del usuario
	{
	case 1:				// Guarda los valores de configuracion
		cantidad_espaciosGlob = cantidad_espacios_t;
		precio_horaGlob = precio_hora_t;
		pago_minimoGlob = pago_minimo_t;
		minutos_redondeoGlob = minutos_redondeo_t;
		minutos_para_salirGlob = minutos_para_salir_t;
		moneda_1Glob = moneda_1_t;
		moneda_2Glob = moneda_2_t;
		moneda_3Glob = moneda_3_t;
		billete_1Glob = billete_1_t;
		billete_2Glob = billete_2_t;
		billete_3Glob = billete_3_t;
		billete_4Glob = billete_4_t;
		billete_5Glob = billete_5_t;
		break;

	case 2:
		break;

	default:
		break;
	}
	
}

void abrir_cargar_cajero()
{
	cout << "	Saldo antes de la carga			";
	cout << "		Carga		";
	cout << "		Saldo		" << endl;

	cout << "Denominacion		";
	cout << "Cantidad	";
	cout << "Total		";
	cout << "Cantidad	";
	cout << "Total		";
	cout << "Cantidad	";
	cout << "Total		";

	cout << "" << endl;

	cout << "Moneda de " << moneda_1Glob;
}

void abrir_dinero()			// Abrir submenu de Dinero
{
	int var_2 = 0;		// Variable para la decision del usuario

	cout << "   - Dinero del Cajero -" << endl;
	cout << "" << endl;

	cout << "Presione un numero para continuar" << endl;
	cout << "" << endl;

	cout << "1. Cargar Cajero" << endl;
	cout << "2. Saldo del Cajero" << endl;
	cout << "3. Ingresos de dinero" << endl;

	cin >> var_2;

	switch (var_2)		// Define las intrucciones dependiendo de la decision del usuario
	{
	case 1: abrir_cargar_cajero();
		break;

	case 2:
		break;

	case 3:
		break;

	default:
		break;
	}

}

int main()					// Funcion Principal
{
	int entry = 0;			// Variable de entrada (define a que ventana desea el usuario ir

	cout << "       - Parqueo -" << endl;
	cout << "" << endl;

	cout << "Presione un numero para continuar" << endl;
	cout << "" << endl;

	cout << "1. Configuracion" << endl;
	cout << "2. Dinero del cajero" << endl;
	cout << "3. Entrada del vehiculo" << endl;
	cout << "4. Cajero del parqueo" << endl;
	cout << "5. Salida de Vehiculo" << endl;
	cout << "6. Ayuda" << endl;
	cout << "7. Acerca De" << endl;
	cout << "8. Salir" << endl;
	cout << "" << endl;

	cin >> entry;		// Se pide al usuario el valor de dependiendo de lo que desee hacer

	switch (entry)		// Se utiliza Switch como un elif bro
	{
		case 1: abrir_config();
			main();
			break;

		case 2: abrir_dinero();
			main();
			break;

		case 3: cout << "Usted ha seleccionado la opcion 3" << endl;
			main();
			break;

		case 4: cout << "Usted ha seleccionado la opcion 3" << endl;
			main();
			break;

		case 5: cout << "Usted ha seleccionado la opcion 3" << endl;
			main();
			break;

		case 6: cout << "Usted ha seleccionado la opcion 3" << endl;
			main();
			break;

		case 7: cout << "Usted ha seleccionado la opcion 3" << endl;
			main();
			break;

		case 8:
			break;


		default: cout << "Usted ha ingresado una opcion incorrecta" << endl; // Este seria el else y nuevamente vuelve al main
	}

	system("pause");
	return 0;
}