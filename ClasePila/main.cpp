#include <iostream>

using namespace std;

class Nodo
{
public:
    int dato;
    Nodo *sigPtr;

    Nodo(int n)
    {
        dato = n;
        sigPtr =0;
    }

};

class Pila
{
public:

    Nodo *TopePtr;

    Pila()
    {
        TopePtr = 0;
    }

    bool IsEmpty()
    {
        return TopePtr ==0;
    }

    void Push(int dato)
    {
        Nodo *auxPtr = new Nodo(dato);
        auxPtr->sigPtr = TopePtr;
        TopePtr = auxPtr;
    }

   void Pop()
    {
        //Elimina un Elemento del Tope
         Nodo *auxPtr = TopePtr;

        if(!IsEmpty())
            {
                TopePtr = TopePtr->sigPtr;
                int num = auxPtr-> dato;
                delete auxPtr;
            }


    }

    int Top()
    { //Devuelve el dato del Tope
        if(IsEmpty()==false)
            {
             return  TopePtr->dato;
             }
        else
            {
            return -1;
            }
    }

    friend ostream &operator<<( ostream &os, Pila &p)
     {
		  Nodo *auxPtr = p.TopePtr;

		  while(auxPtr!=0)
            {
                os<<auxPtr->dato<<"->";
                auxPtr = auxPtr->sigPtr;
            }
		  return os;
		}


		int getMayor(Pila &p)
		{
		   Nodo *Mayor = TopePtr;
		   int maxi;
		    Pila aux;

                 while (Mayor->sigPtr!=0)
                {
                    *maxi = *maxi-> auxPtr->dato;
                    aux.Push(o.Pop());

                  }

    }

    int getTam()
    {
        int * cont;
        int *suma;
        Nodo *auxPtr = TopePtr;
        while (auxPtr->sigPtr!=0){
                  *suma = *suma + auxPtr->dato;
                   auxPtr = auxPtr->sigPtr;
                  }
                  return *suma;

    }

    int getPromedio()
    {
        Nodo *auxPtr = TopePtr;
            int *suma;
            int tam;
            int *promedio;

            while (auxPtr->sigPtr!=0){
                  *suma = *suma + auxPtr->dato;
                   auxPtr = auxPtr->sigPtr;
                  }
                  *promedio = *suma;
        }







};



   /* void Inventir(Pila &p)
		{
		    Pila aux, aux1;
		    while(!p.IsEmpty())
            {
                aux.Push(p.Pop());
            }

            while (!aux.IsEmpty())
                {
                    aux1.Push(aux.Pop());
                }

            while(!aux1.IsEmpty())
                    {
                        p.Push(aux1.Pop());

                    }
                  cout<<p;
		}
		*/




int main()
{
    Pila p = Pila();
    p.Push(8);
    p.Push(7);
    cout<<p <<endl;

   Inventir(p);
   getMayor(p);
   getTam();


    return 0;
}



