#include <iostream>

using namespace std;

void csere(int t[], int a, int b)
{
    int temp=0;
    temp=t[b];
    t[b]=t[a];
    t[a]=temp;
    cout << " Csere " << endl;
}

void rendez(int a[])
 {
    for (int j=10; j>0; j--)
    {
        cout << " Rendez, ciklus: "<< j << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << " Rendez, belső ciklus: " << i << endl;
            if (a[i]>a[i+1])
            {
              cout << "Csere, " << a[i] << " cserélt" <<a[i+1]<< "-val" << endl;
              csere(a, i, i+1);
            }
        }
    }
 }
int main()
{
   int a[]={3, 14, 6, 8, 23, 4, 61, 9, 32, 9};
   rendez(a);
   for (int i=0; i<11; ++i)
   {
       cout << a[i]<< " " << endl;
   }

   
   return 0;
}

