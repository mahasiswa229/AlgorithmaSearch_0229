#include <iostream>
using namespace  std;

int arr[20];
int n;
int i;

void input()
{
    while (true)
    {
        cout << "Masukan  jumlah data : "; 
        cin >> n;
        if((n > 0) && (n <= 20))
            break;
        else
        cout << "Jumlah data minimum harus 1 dan maksimal 20.\n\n";
    }

    cout << "\n----------------\n";
    cout << "Masukan Elemen Array";
    cout << "\n----------------\n";
    for(i = 0 ; i < n ; i++)
    {
        cout << "<" << (i+1) << ">";
        cin  >> arr[i] ;
    }
}           
void LinearSearch()
{
    char ch;
    int ctr;
    int item;

    do
    {
        cout << "\n Masukan Elemen yang ingin dicari :";
        cin >> item;

        ctr = 0;
        i = 0;
    
    while (i < n)
    {
        ctr++;
        if(arr[i] == item)
        {
            cout << "\n" << item << " ditemukan pada index ke-" << (i+1);
            break;
        }
        i++;
    }
    if (i == n)
    cout << "\n"<< "Item tidak ditemukan.";
    cout << "\nAngka pembanding :" << ctr << endl;
    cout << "Lanjutkan mencari (y/n): ";
    cin >> ch;
    } while ((ch =='y')(ch == 'Y')) ;   
}

void display()
{
    cout << "Elemen array : \n";
    for  (i=0; i<n; i++)
    cout << arr[i] << "   ";
    cout << endl;
}

int main() 
{
    input();
    LinearSearch();
}