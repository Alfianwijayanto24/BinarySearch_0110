#include <iostream>
using namespace std;

int element[10];
int nPanjang;
int x;

void input()
{
    while (true)
    {
        cout << "Masukan banyak elemen pada array (MAKSIMAL 10):";
        cin >> nPanjang;

        if (nPanjang <=10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elemen tidak boleh lebih dari 10. silakan coba lagi.\n";
        }
    }
        cout << "\n======================\n";
    cout << "        masukan elemen Array   \n";
    cout << "======================\n";

    for (int i = 0; i < nPanjang; i++)
    {

        cout << "DATA KE-" << (i + 1) <<  "=";
        cin >> element[i];
    }
    
    
    
} 

void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for(int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element [j + 1] = temp;
            }
        }
        pass++;
    }while (pass <= nPanjang - 1);
    
        
    
    

    
}



