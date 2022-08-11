#include <iostream>
#include "Nodo.h"

using namespace std;

class ArbolBin{
private:
	int peso;
public:
    Nodo *raiz;
    ArbolBin();
    void insertar(Nodo *&);
    void preOrden(Nodo *&);
    void postOrden(Nodo *&);
    void inOrden(Nodo *&);
    void imprimir(Nodo *&n, bool isRight, string indent);
    void hojas(Nodo *&n);
    int pesoArbol();
    void imprimirHijos(Nodo *&n);
    void imprimirPadres(Nodo *&n);
    int altura(Nodo *&n);
    Nodo* buscar(int id); 
    void sonHermanos(Nodo *&n, Nodo *&m);
    void imprimirHijosUnicos(Nodo *&n);
};

ArbolBin::ArbolBin(){
	this->peso = 0;
    this->raiz = NULL;
}

void ArbolBin::sonHermanos(Nodo *&n, Nodo *&m){
    if(n != NULL && m != NULL){
        if(n->padre == m->padre){
            cout << "Son hermanos" << endl;
        }else{
            cout << "No son hermanos" << endl;
        }
    }
}

// Imprime todos los nodos que son hijos unicos
void ArbolBin::imprimirHijosUnicos(Nodo *&n){
    if(n != NULL){
        if((n->der == NULL && n->izq != NULL)){
            n->izq->mostrar();
        } else if((n->der != NULL && n->izq == NULL)){
            n->der->mostrar();
        }
        cout << endl;
    }
    if(n->der != NULL){
        imprimirHijosUnicos(n->der);
    }
    if(n->izq != NULL){
        imprimirHijosUnicos(n->izq);
    }
}

Nodo* ArbolBin::buscar(int id){
    Nodo *n = this->raiz;
    while(n != NULL){
        if(n->id == id){
            return n;
        }
        if(n->id > id){
            n = n->izq;
        }
        else{
            n = n->der;
        }
    }
    return n;
}

void ArbolBin::insertar(Nodo *&n){
    if(this->raiz == NULL){
        this->raiz = n;
        this->peso++;
    }else{
        Nodo *aux = this->raiz;
        while(true){
            if(n->id < aux->id){
                if(aux->izq == NULL){
                    n->padre = aux;
                    aux->izq = n;
                    this->peso++;
                    break;
                }
                aux = aux->izq;
            }else{
                if(aux->der == NULL){
                    n->padre = aux;
                    aux->der = n;
                    this->peso++;
                    break;
                }
                aux = aux->der;
            }
        }
    }
}

/*
void ArbolBin::insertar(Nodo *&n){
    if(this->raiz == NULL){
        this->raiz = n;
    }else{
        Nodo *aux = this->raiz;
            if(n->id < aux->id){
                if(aux->izq == NULL){
                    aux->izq = n;
                }
                aux = aux->izq;
            }else{
                if(aux->der == NULL){
                    aux->der = n;
                    break;
                }
                aux = aux->der;
                insertar()
            }
    }
}
*/

void ArbolBin::preOrden(Nodo *&n){
    if(n != NULL){
        n->mostrar();
        cout << endl;
        preOrden(n->izq);
        preOrden(n->der);
    }
}

void ArbolBin::postOrden(Nodo *&n){
    if(n != NULL){
        postOrden(n->izq);
        postOrden(n->der);
        n->mostrar();
        cout << endl;
    }
}

void ArbolBin::inOrden(Nodo *&n){
    if(n != NULL){
        inOrden(n->izq);
        n->mostrar();
        cout << endl;
        inOrden(n->der);
    }
}

void ArbolBin::imprimir(Nodo *&n, bool isRight, string indent){
    if(n->der != NULL){
        imprimir(n->der, true, indent + (isRight ? "        " : "|        "));
    }
    cout << indent << (isRight ? " /" : " \\");
	cout << n->id << "-";
	cout << n->getPalabra();
    cout << endl;
    if(n->izq != NULL){
        imprimir(n->izq, false, indent + (isRight ? "|        " : "        "));
    }
}

// Metodo que imprime los nodos hoja
void ArbolBin::hojas(Nodo *&n){
	if(this->raiz != NULL){
		if(n->izq == NULL && n->der == NULL){
        	n->mostrar();
        	cout << endl;
    	}
    	if(n->izq != NULL){
        	hojas(n->izq);
    	}
    	if(n->der != NULL){
       		hojas(n->der);
    	}	
	}
    
}

//Metodo que da el peso del arbol
int ArbolBin::pesoArbol(){
	return this->peso;
}

//Metodo que imprime los nodos hijos
void ArbolBin::imprimirHijos(Nodo *&n){
    if(this->raiz != NULL){
        if(n->izq != NULL){
        	n->izq->mostrar();
        	cout << endl;
        	imprimirHijos(n->izq);
    	}
    	if(n->der != NULL){
       		n->der->mostrar();
       		cout << endl;
       		imprimirHijos(n->der);
    	}
    }
}

// Metodo que imprime los padres
void ArbolBin::imprimirPadres(Nodo *&n){
    if(n != NULL){
    	if(n->der == NULL && n->izq == NULL){
				    		
		}else{
			n->mostrar();
        	cout << endl;
		}
		
        imprimirPadres(n->izq);
        imprimirPadres(n->der);
    }
}

// Metodo que retorna la altura del arbol
int ArbolBin::altura(Nodo *&n){
    if(n == NULL){
        return 0;
    }
    int alturaIzq = altura(n->izq);
    int alturaDer = altura(n->der);
    if(alturaIzq > alturaDer){
        return alturaIzq + 1;
    }else{
        return alturaDer + 1;
    }
}
