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
		cout<<"3- Calcular N� de clases [Pr�ximamente]"<<endl;
		cout<<"4- Calcular amplitud de clase [Pr�ximamente]"<<endl;
		cout<<"5- Versi�n de staty"<<endl;
		cout<<"\n\tSeleccione una opci�n"<<endl;
		cin>>op;
	
	switch(op){
		
		case 1:
			float max, min;
			cout<<"Ingrese el valor m�nimo de los datos: ";cin>>min;
			cout<<"Ingrese el valor m�ximo de los datos: ";cin>>max;
			AT=max-min;
			cout<<"La amplitud total es: "<<AT<<endl;
			system("PAUSE");
			system("CLS");
			goto menu;
			break;
		case 2:
menu_ATr:	if(AT>0){
				char resp, resp_s;
				cout<<"�Quiere usar la amplitud total anteriormente usada?\n1-S�\n2-No: ";
				cin>>resp;
				switch(resp){
					case 1:
						cout<<"\n�Cu�ntos decimales tiene la Amplitud total real?\n1- 0\n2- 1\n3- 2\nIngrese una opci�n: ";
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
								cout<<"Ingrese una opci�n v�lida"<<endl;
								system("PAUSE");
								system("CLS");
								goto menu_ATr;
								break;
						}
						}
						break;
					case 2:
						cout<<"Ingrese la amplitud total: ";cin>>AT;
						cout<<"\n�Cu�ntos decimales tiene la Amplitud total real?\n1- 0\n2- 1\n3- 2\nIngrese una opci�n: ";
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
								cout<<"Ingrese una opci�n v�lida"<<endl;
								system("PAUSE");
								system("CLS");
								goto menu_ATr;
								break;
						}												
						break;
					default:
						cout<<"Ingrese una opci�n v�lida"<<endl;
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
			cout<<"Versi�n de staty"<<endl;
			cout<<"Versi�n Alpha 1a1"<<endl;
			cout<<"\nDev: Gregory M�rquez"<<endl;
			cout<<"\n";
			system("PAUSE");
			system("CLS");
			goto menu;
			break;
		default:
			cout<<"\nIngrese un n�mero v�lido"<<endl;
			getch();
			system("CLS");
			goto menu;
			break;
	}
	
}
