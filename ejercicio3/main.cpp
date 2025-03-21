#include "lista_enlazada.h"

int main(){
    list list;
    list.head = nullptr;
    list.tail = nullptr;
    list.size = 0;

    shared_ptr<node> node1 = create_node(2);
    shared_ptr<node> node2 = create_node(4);
    shared_ptr<node> node3 = create_node(7);

    push_front(list, node1);
    push_back(list, node2);
    insert(list, node3, 0);
    erase(list, 0);
    print_list(list);

    return 0;
}