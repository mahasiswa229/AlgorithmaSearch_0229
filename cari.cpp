#include <iostream>
using namespace  std;

int arr[20];
int n;
int i;

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
int main() {}