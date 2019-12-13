#include <iostream>
using namespace std;
int main(){

    int i,n,batas=10,jumlah;
    
    // POINTER
    
    int *a=&i;
    int *b=&n;
    int *c=&jumlah;
    
    cout<<"PROGRAM MENAMPILKAN BILANGAN PERKALIAN"<<endl;
    cout<<"======================================"<<endl;
    cout<<"Bilangan yang akan dikalikan : ";
    cin>>n;
    cout << "Alamat yang dikalikan : " << &n << endl;
    cout<<"======================================"<<endl;
    cout<<"Menampilkan Hasil Perkalian :"<<endl;

    for(i=0;i<=batas;i++)
    {
	jumlah=i*n;
	*c = i*n;
    cout<<i<<"*"<<n<<"="<< jumlah <<endl;
    cout << *a << "*" << *b << "=" << *c << endl;
	}
    return 0;
}
