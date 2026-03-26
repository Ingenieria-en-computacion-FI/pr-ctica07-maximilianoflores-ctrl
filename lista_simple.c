#include "lista_simple.h"

Nodo* crearNodo(void *dato, size_t size){
  
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo))
    if(nuevo!=NULL){
        nuevo->siguiente = NULL;
        nuevo->dato = malloc(size);
        memcpy(nuevo->dato, dato, size);        
    }
    return nuevo;
}
void LiberarNodo(Nodo *n){
    if(n!=NULL && n->siguiente ==NULL){
    free(nuevo->dato);
    free(n);
    }
}


void borrarNodo(Nodo *n);
bool modificarNodo(Nodo *n, void *d, size_t size);{
    if(n!= NULL){
        memcpy(n->dato, n, size);
    }
}

Lista* crearLista(){
    lista *l = (Nodo*)malloc(sizeof(Nodo));
    if(l = NULL){
    l-> head = l-> tail = NULL;
    }
return l;
}

bool esVacia(Lista *lista){
    return lista->head == NULL;
}

void insertarInicio(Lista* lista, void* dato, size_t size){
    Nodo *nuevoNodo = crearNodo(dato, size);
    nuevoNodo->siguiente = l->head;
    l->head = nuevoNodo
}
void insertarFinal(Lista* lista, void* dato, size_t size){
    Nodo *nuevoNodo = crearNodo(dato, size);
    l->tail->siguiente = nuevoNodo
    l->tail= nuevoNodo
}

void insertarPorPosicion(Lista* lista, void* dato, size_t size){
    if(esVacia(lista)){
        return;
    }
    int total = 0;
    for(Nodo *tmp = lista->head; tmp !=NULL; tmp= tmp->siguiente{
        total++;
    })
    if(pos==0){
        insertarInicio(lista, dato, size);
    }else if(pos == total){

    }else if(pos >=1 && pos<total){

    }else{
        printf("La posición no es válida\n");
    }
}
void eliminarInicio(Lista *lista){
    Nodo *tmp = l->head;
    l->head = head-> siguiente;
    tmp->siguiente = NULL;
    borrarNodo(tmp);
}
void eliminarFinal(Lista *lista){
    Nodo *tmp = l->head;
    for( ;tmp->sig!=l->tail;tmp=tmp->sig)
    l->tail = tmp;
    tmp = l->tail->siguiente;
    l->tail->siguiente = NULL;

    borrarNodo(tmp);
}
void eliminarPorPosicion(Lista* lista, int pos){
}