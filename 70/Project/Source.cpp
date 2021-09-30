#include <iostream>
#include <string>

using namespace std;
char *temp;
char strings [10][256];
char temps[10][256];

void mcopy(char S1[10][256], char S2[10][256], int m , int n) {
	for (int i = 0; i<256; i++) {
			*&S1[m][i] = *&S2[n][i];
			
	}

}
void gereftan (char M[10][256]){

	for (int i = 0; i<10;i++){
			cin.getline(M[i], 256);
		
	}
}
void show (char M[10][256]){

	for (int i = 0; i<10;i++){
		cout << "\n";
		for (int j = 0; j < 10; j++)
			cout << M[i][j];
	}
}
void moratab(char M[10][256]){

	for (int i = 0; i < 10 ; i++){
		if (_stricmp(M[i], M[i + 1]) > 0){
			mcopy(temps,M,i,i);
			//temp = *&M[i+1];
			mcopy(M, M, i + 1,i);
	//	*&M[i + 1][1] = *&M[i][1];
			//mcopy(M, temps, i, i);
		//*&M[i] = temp;
	}
			
	}
}
int main(){
	cout << "10 ta string vared konid ta morattabesh konam ! :) ";
	gereftan (strings);
	cout << "Morattab shode :";
	moratab(strings);
	show(strings);
	//system ("pause");
}