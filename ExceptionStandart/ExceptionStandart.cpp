#include <iostream>
#include <exception>						
//untuk obyek excception yg akan digunakan
#include <array>							
//untuk obyek array yg akan digunakan
using namespace std;

int main() 
{
	cout << "awal program" << endl;	//penanda 1...
	try {
		array <int, 3> data = { 1,2,3 };
		//pesan array integer 3 elemen
		cout<<data.at(5)<<endl;
		//memanggil array elemen ke 5
	}
	