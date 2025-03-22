#include "lista_enlazada.h"

int main(){
    //se inicializa la lista
    list list;
    list.head = nullptr;
    list.tail = nullptr;
    list.size = 0;

    //se crean distintos nodos
    shared_ptr<node> node1 = create_node(2);
    shared_ptr<node> node2 = create_node(4);
    shared_ptr<node> node3 = create_node(7);

    //se insertan los nodos a la lista de formas diferentes
    push_front(list, node1);
    push_back(list, node2);
    insert(list, node3, 0);

    //se elimina el nodo en la posicion 0
    erase(list, 0);

    //se imprime toda la lista
    print_list(list);

    return 0;
}