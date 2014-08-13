#include <iostream>


using namespace std;

class Set
{
    public:

    int tam;
    int MAXIMO;
    int *dato;



   /*Set(int n)
    {
        tam= 0;
        MAXIMO= n;
        dato= new int[n];
    }

     ~Set ()
    {
        delete[] dato;
    }*/

    void vaciar ()
    {
        tam= 0;
    }

    void Insertar(int n)
    {
       while(!Existe(n))
       {
        tam<MAXIMO;
        dato[tam++]= n;
       }

    }


    bool Existe (int n)
    {
        for (int i= 0; i<tam; i++)
            if (dato[i]==n)
            return true;
            return false;
    }


    void Eliminar (int n)
    {

    }

    friend ostream &operator<<( ostream &os, Set &s)
     {

		}





};

int main()
{
    Set s = Set();
    s.Insertar(4);

    cout<<s;




    return 0;
}
