#include <iostream>
#include <conio.h>
using  namespace  std ;

int main ()

{
// Data

   	string nama;
	int umur;

    // Masuk

    cout<< " --------------- " <<endl;
    cout<< " Kategori Umur Pada Manusia " << endl;
    cout<< " --------------- " <<endl;


    // Masukan Data


    cout<< " Masukkan Nama anda = " ;
    getline (cin,nama);

    Mulailah:
	cout<< " Masukkan Umur anda = " ;
	cin>>umur;


	// Deklarasi

	if (umur>= 60 && umur<= 100 ){
		cout<< " \n Anda Termasuk Kategori Lansia " ;

	} else  if (umur>= 30 && umur<= 59 ){
		cout<< " Anda Termasuk Kategori Dewasa " ;

	} else  if (umur>= 18 && umur<= 29 ){
		cout<< " Anda Termasuk Kategori Pemuda " ;

	} else  if (umur>= 12 && umur<= 17 ){
		cout<< " Anda Termasuk Kategori Remaja " ;

	} else  if (umur>= 6 && umur<= 11 ){
		cout<< " Anda Termasuk Kategori Anak-anak " ;

    } else  if (umur>= 3 && umur<= 5 ){
		cout<< " Anda Termasuk Kategori Balita " ;

    } else  if (umur>= 1 && umur<= 2 ){
		cout<< " Anda Termasuk Kategori Batita " ;

    } else  if (umur>= 0 && umur<= 0 ){
		cout<< " Anda Termasuk Kategori Bayi " ;

	}else if (umur>100){
		cout<< " Umur yang anda masukan salah " <<endl;

	}

    return 0; 
}
