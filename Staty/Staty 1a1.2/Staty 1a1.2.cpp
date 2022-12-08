#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int op;
	float AT, ATr, K, AC;
	
menu:	cout<<"\t \n Bienvenido a staty"<<endl;
		cout<<"\n1- Calcular amplitud total"<<endl;
		cout<<"2- Calcular amplitud total real"<<endl;
		cout<<"3- Calcular Nº de clases [Próximamente]"<<endl;
		cout<<"4- Calcular amplitud de clase [Próximamente]"<<endl;
		cout<<"5- Versión de staty"<<endl;
		cout<<"6- Salir"<<endl;
		cout<<"\n\tSeleccione una opción: ";
		cin>>op;
	
	switch(op){
		
		case 1:
			float max, min;
menu_AT:	cout<<"Ingrese el valor mínimo de los datos: ";cin>>min;
			cout<<"Ingrese el valor máximo de los datos: ";cin>>max;
			AT=max-min;
			if(AT<0){
				cout<<"\nLa amplitud total no puede dar un resultado negativo ni cero"<<endl;
				cout<<"Por favor reingrese los datos"<<endl;
				cout<<"\n";
				system("PAUSE");
				system("CLS");
				goto menu_AT;
			}
			else{
				cout<<"La amplitud total es: "<<AT<<endl;
			}
			system("PAUSE");
			system("CLS");
			goto menu;
			break;
		case 2:
menu_ATr:	if(AT>0){
				char resp, resp_s;
				cout<<"¿Quiere usar la amplitud total anteriormente usada?\n1-Sí\n2-No: ";
				cin>>resp;
				switch(resp){
					case 1:
						cout<<"\n¿Cuántos decimales tiene la Amplitud total real?\n1- 0\n2- 1\n3- 2\nIngrese una opción: ";
						cin>>resp_s;
						switch(resp_s){
							case 1:
								ATr=AT+1;
								break;
							case 2:
								ATr=AT+0.1;
								break;
							case 3:
								ATr=AT+0.01;
								break;
							default:
								cout<<"Ingrese una opción válida"<<endl;
								system("PAUSE");
								system("CLS");
								goto menu_ATr;
								break;
						}
						break;
					case 2:
						cout<<"Ingrese la amplitud total: ";cin>>AT;
						cout<<"\n¿Cuántos decimales tiene la Amplitud total real?\n1- 0\n2- 1\n3- 2\nIngrese una opción: ";
						cin>>resp_s;
						switch(resp_s){
							case 1:
								ATr=AT+1;
								break;
							case 2:
								ATr=AT+0.1;
								break;
							case 3:
								ATr=AT+0.01;
								break;
							default:
								cout<<"Ingrese una opción válida"<<endl;
								system("PAUSE");
								system("CLS");
								goto menu_ATr;
								break;
						}												
						break;
						break;
					default:
						cout<<"Ingrese una opción válida"<<endl;
						system("PAUSE");
						system("CLS");
						goto menu_ATr;
						break;
					}
				}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			system("CLS");
			cout<<"\tVersion"<<endl;
			cout<<"Versión Alpha 1a1.2"<<endl;
			cout<<"\nCambios:"<<endl;
			cout<<"1- Se arregló el problema que dejaba que la amplitud total fuera 0 o menor que 0\n2- Se hicieron pequeñas correciones de texto en algunas de las opciones\n3- Se agregó una 6ta opción para salir de la aplicación"<<endl;
			cout<<"\nDev: Gregory Márquez"<<endl;
			cout<<"\n";
			system("PAUSE");
			system("CLS");
			goto menu;
			break;
menu_salir:	case 6:
			int salir;
			cout<<"¿Desea salir?"<<endl;
			cout<<"1. Sí\n2. No"<<endl;
			cin>>salir;
			switch(salir){
				case 1:
					cout<<"\n\tVuelva pronto"<<endl;
					system("PAUSE");
					break;
				case 2:
					system("CLS");
					goto menu;
					break;
				default:
					cout<<"\nIngrese una opción válida"<<endl;
					system("PAUSE");
					system("CLS");
					goto menu_salir;
					break;
			}
			break;
		default:
			cout<<"\nIngrese una opción válida"<<endl;
			getch();
			system("CLS");
			goto menu;
			break;
	}
	
}
