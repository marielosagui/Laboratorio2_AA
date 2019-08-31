//ejercicio 2


struct Nodo{
        int dato;
        Nodo *sig;
    } *inicio;


class pila{
    public:
    Nodo * crearNodo (int valor){
        Nodo *n= new Nodo;
        n->dato= valor;
        n->sig= nullptr;
        return n;
    }

    void push(int valor){
        Nodo *n = crearNodo(valor);
        n-> sig=inicio;
        inicio=n;
    }
}

 void pop(){
            Nodo *temp = inicio;
            inicio = inicio -> sig;
            free(temp);
        }

        void mostrarPila(){
            Nodo *temp = inicio;
            if(!inicio){
                cout << "La pila esta vacia"<<endl;
            }
            else
            {
                while (temp){
                    cout << temp -> dato << ", ";
                    temp = temp -> sig;
                }
            }
        }
        Pila(){
            inicio=nullptr;
        }
};

int llenarpar(int n){
    Pila Pilapar;
    Pilapar.push(n);
    return 0;
}

int llenarimpar(int n){
    Pila Pilaimpar;
    Pilaimpar.push(n);
    return 0;
}


int main(){
    Pila Pilaimpar;
    Pila Pilapar;
    int n;
    int x=0;
    int y=0;
    cout<<"Ingrese numeros"<<endl;
    while (n != 0)
    {
        cin>>n;
        if(n % 2 ==0 && n!=0)
        {
            Pilapar.push(n);
            Pilaimpar.pop();
            x++;
        }
        if(n%2 != 0 && n!=0)
        {
            Pilaimpar.push(n);
            Pilapar.pop();
            y++;
        }
    }

    if (y==x){
        cout << "Tienen el mismo tamaño",,"Pares:"<<x() << ", Impares:"<< y <<;
    }
    else
    {
        cout << "No tienen el mismo tamaño";
    }    

}