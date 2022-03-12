#include <iostream>
#include <chrono>
using namespace std;

int main() {
	auto start = chrono::high_resolution_clock::now();
	cout << "Малинов Никита Александрович,количество букв 6,7,13"<< '\n';
	int name = 6;
	int secName = 7;
	int pastName = 13;
	int matrix_A[name][secName];
	int matrix_B[name][secName];
	int matrix_C[name][secName];
	cout << "Рассчет матриц согласно варианту 1: "<< '\n';
	//massiv A
	cout << "Массив А" << endl;
	for (int i = 0;i<name;i++){
		for(int j = 0; j<secName; j++){
			matrix_A[i][j] = (name*((name % 2 )+1)+pastName*((secName % 2)-1))/name;
			cout << matrix_A[i][j] << '\t';
		}
		cout << endl;
	}
	cout << "Массив В" << endl;
	//Massive B
	for (int i = 0;i<name;i++){
			for(int j = 0; j<secName; j++){
				matrix_B[i][j] = (name*((name % 2 )-1)-pastName*((secName % 2)+1))/secName;
				cout << matrix_B[i][j] << '\t';
			}
			cout << endl;
	}
	cout << "Массив C" << endl;
	if (name > pastName ){
		for (int i = 0; i<name;i++){
			for (int j = 0;j<secName;j++){
				matrix_C[i][j]=matrix_A[i][j];
				cout << matrix_C[i][j] << '\t';
			}
			cout << endl;
		}
	} else {
		for (int i = 0; i<name;i++){
					for (int j = 0;j<secName;j++){
						matrix_C[i][j]=matrix_B[i][j];
						cout << matrix_C[i][j] << '\t';
			}
			cout << endl;
		}
	}
	auto end = chrono::high_resolution_clock::now();
	chrono::duration<float> duration= end - start;
	cout<<"Скорость работы кода: "<<duration.count()<<" секунд."<<endl;
}
