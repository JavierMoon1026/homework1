#include "lista_enlazada.h"

int main(){
    list list;
    list.head = nullptr;
    list.tail = nullptr;

    shared_ptr<node> node = create_node(2);
    push_front(list, node);
    // push_back(list, node);
    insert(list, node, 0);
    erase(list, node, 0);
    print_list(list);

    return 0;
}