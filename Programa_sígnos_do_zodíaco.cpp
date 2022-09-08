
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Data{
	private:
		int dia;
		int mes;
		int ano;
		
	public:		
		void setDia(int _dia);
		void getDia();
	
		void setMes(int _mes);
		void getMes();
	
		void setAno(int _ano);
		void getAno();

};


	void Data::setDia(int _dia){
		dia = _dia;
	}
	
	void Data::setMes(int _mes){
		mes = _mes;
	}
	
	void Data::setAno(int _ano){
		ano = _ano;
	}



				void Data::getDia(){
					cout << dia;
				}
				
				void Data::getMes(){
					
					switch(mes){
					case 1:
						cout << " de Janeiro de ";
						cout << ano <<endl;
							if(dia<21){
								cout << "Signo: CAPRICORNIO " <<endl;
							}else
								cout << "Signo: AQUARIO " <<endl;
					break;	
					case 2:
						cout << " de Fevereiro de ";
						cout << ano <<endl;
						if(dia<19){
								cout << "Signo: AQUARIO " <<endl;
							}else
								cout << "Signo: PEIXES" <<endl;
					break;	
					case 3:
						cout << " de Marco de ";
						cout << ano <<endl;
						if(dia<21){
								cout << "Signo: PEIXES " <<endl;
							}else
								cout << "Signo: ARIES " <<endl;
					break;	
					case 4:
						cout << " de Abril de ";
						cout << ano <<endl;
						if(dia<21){
								cout << "Signo: ARIES " <<endl;
							}else
								cout << "Signo: TOURO " <<endl;
					break;	
					case 5:
						cout << " de Maio de ";
						cout << ano <<endl;
						if(dia<21){
								cout << "Signo: TOURO " <<endl;
							}else
								cout << "Signo: GEMEOS " <<endl;
					break;	
					case 6:
						cout << " de Junho de ";
						cout << ano <<endl;
						if(dia<21){
								cout << "Signo: GEMEOS " <<endl;
							}else
								cout << "Signo: CANCER " <<endl;
					break;	
					case 7:
						cout << " de Julho de ";
						cout << ano <<endl;
						if(dia<23){
								cout << "Signo: CANCER " <<endl;
							}else
								cout << "Signo: LEAO " <<endl;
					break;	
					case 8:
						cout << " de Agosto de ";
						cout << ano <<endl;
						if(dia<25){
								cout << "Signo: LEAO " <<endl;
							}else
								cout << "Signo: VIRGEM " <<endl;
					break;	
					case 9:
						cout << " de Setembro de";
						cout << ano <<endl;
						if(dia<24){
								cout << "Signo: VIRGEM " <<endl;
							}else
								cout << "Signo: LIBRA " <<endl;
					break;	
					case 10:
						cout << " de Outubro de ";
						cout << ano <<endl;
						if(dia<24){
								cout << "Signo: LIBRA " <<endl;
							}else
								cout << "Signo: ESCORPIAO " <<endl;
					break;	
					case 11:
						cout << " de Novembro de ";
						cout << ano <<endl;
						if(dia<23){
								cout << "Signo: ESCORPIAO " <<endl;
							}else
								cout << "Signo: SAGITARIO " <<endl;
					break;	
					case 12:
						cout << " de Dezembro de ";
						cout << ano <<endl;
						if(dia<22){
								cout << "Signo: SAGITARIO " <<endl;
							}else
								cout << "Signo: CAPRICORNIO " <<endl;
					break;	
					}
				}
			
				void Data::getAno(){
					if(((ano % 4) == 0)&& ((ano % 100)!=0) ||((ano % 400) ==0)){
						cout<< "E bissexto." <<endl;
					}else
						cout << "Nao e bissexto." <<endl;
				}
			


int main() {
	int d, m, a;
	Data Nascimento;
	
	  inicio:
		
	cout <<"DIGITE A DATA DO SEU NASCIMENTO (somente numeros):" << endl;
	
		cout << "DIA: ";
		cin >> d;
		
		cout << "MES: ";
		cin >> m;
		
		cout << "ANO: ";
		cin >> a;		
		
		
        if ((d >= 1 && d <= 31) && (m >= 1 && m <= 12) && (a >= 1850 && a <= 2050)
            &&(d == 29 && m == 2 ) && ((a % 4) == 0)&& ((a % 100)!=0) ||((a % 400) ==0)
			|| (d <= 28 && m == 2)
			|| ((d <= 30) && (m == 4 || m == 6 || m == 9 || m == 11))
			|| ((d <=31) && (m == 1 || m == 3 || m == 5 || m == 7 || m ==8 || m == 10 || m == 12))	
		){
        	Nascimento.setDia(d);
        	Nascimento.setMes(m);
        	Nascimento.setAno(a);
        	cout<<endl;
        	Nascimento.getDia();
        	Nascimento.getMes();
        	Nascimento.getAno();
			cout<<endl;
			system("pause");		
            }else
			
		cout << "DATA INVALIDA!" << endl;
         system("pause"); 
         system("cls");

 		goto inicio;
	
	
	return 0;
}
