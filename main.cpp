#include <iostream>
using namespace std;
#define tam 50
void ingresar(int a[],int n);
void ordenar(int a[],int n);
void imprimir(int a[],int n);

int main()
{

    int a[5]={10,3,9,5,1};
    int i,j,aux;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
             if(a[j]<a[i])
            {
                aux=a[i];
                a[i]=a[j];
                a[j]=aux;
            }
        }

    }

    for(int i=0;i<5;i++)
    {
       cout<<a[i];

    }


    return 0;
}
