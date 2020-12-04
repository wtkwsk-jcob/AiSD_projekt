#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;  
const int rozmiar=10;  //rozmiar tablicy
int A[rozmiar]={0}; //deklaracja tablicy
//odczytywanie danych z pliku 1
void odczyt1()
 { 
    int x, i=0;      	   
    ifstream fin; //ifstream otwiera plik
    cout << "Liczby z pliku pierwszego:" << endl;   
    fin.open("dane1.txt", ios::in);   
    while (fin>>x)   
   {       
        A[i++] = x;
        cout << setw(5) << x;  
   }           
    cout<<endl;    
    fin.close();  //ifstream zamyka plik
} 
//zapisywanie danych do pliku
 void zapis1() //funkcja zapisywania do pliku
{
    int x, i=0;            
    ofstream fout; // ofstream otwiera plik
    fout.open("wyniki1.txt", ios::out);
    for (i=0; i<rozmiar; i++)    
   {       
       fout<<A[i]; 
       cout<<setw(5)<<A[i];    
   }     
    fout.close(); //ofstream zamyka plik
} 
//odczytywanie danych z pliku 2
void odczyt2()
 { 
    int x, i=0;      	   
    ifstream fin; //ifstream otwiera plik
    cout << "\nLiczby z pliku drugiego:" << endl;   
    fin.open("dane2.txt", ios::in);   
    while (fin>>x)   
   {       
        A[i++] = x;
        cout << setw(5) << x;  
   }           
    cout<<endl;    
    fin.close();  //ifstream zamyka plik
} 
//zapisywanie danych do pliku
 void zapis2() //funkcja zapisywania do pliku
{
    int x, i=0;            
    ofstream fout; // ofstream otwiera plik
    fout.open("wyniki2.txt", ios::out);
    for (i=0; i<rozmiar; i++)    
   {       
       fout<<A[i]; 
       cout<<setw(5)<<A[i];    
   }     
    fout.close(); //ofstream zamyka plik
} 
void sortowanie_babelkowe() //porównuje dwa kolejne elementy oraz zamienia ich kolejnoœæ,
// jeœli kolejna liczba jest mniejsza od poprzedniej
{
    int temp;    
    for (int i=0; i<rozmiar-1; i++)      
        for (int j=0; j<rozmiar-1; j++)      
        {          
            if (A[j]>A[j+1])          
            {              
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
             }     
         }
 }
int main()
{
    odczyt1(); //wywo³ywanie funkcji odczytu pliku
    sortowanie_babelkowe();
    cout <<"\nPosortowane liczby z pliku pierwszego:" << endl;
    zapis1(); //zapis wyniku do pliku
    
    odczyt2();//wywo³ywanie funkcji odczytu pliku
    sortowanie_babelkowe();
    cout<<"\nPosortowane liczby z pliku drugiego:"<<endl;
    zapis2(); //zapis wyniku do pliku
    return 0;
}

