#include <iostream>
#include <memory>
#include "lista_enlazada.h"
using namespace std;

struct node{
    int value;
    shared_ptr<node> next;
};

struct list{
    shared_ptr<node> head;
    shared_ptr<node> tail;
    size_t size;
};

shared_ptr<node> create_node(int value){
    shared_ptr<node> new_node;
    new_node -> value = value;
    new_node -> next = nullptr;
    return new_node;
}

int push_front(list list, shared_ptr<node> node){
    if(!list.head){
        list.tail = node;
        list.head = node;
        list.size++;
        return 0;
    }
    node -> next = list.head;
    list.head = node;
    list.size++;
    return 0;
}

int push_back(list list, shared_ptr<node> node){
    if(!list.head){
        list.tail = node;
        list.head = node;
        list.size++;
        return 0;
    }
    list.tail -> next = node;
    list.tail = node;
    list.size++;
    return 0;
}

int insert(list list,shared_ptr<node> node, int pos){
    if(pos <= 0) {
        push_front(list, node);
    } else if (pos >= list.size) {
        push_back(list, node);
    } else {
        auto previous_node = list.head;
        for(int i = 0; i < pos - 1; ++i) {
            previous_node = previous_node -> next;
        }
        node -> next = previous_node -> next;
        previous_node -> next = node;
    }
    return 0;
}

int erase(list list,shared_ptr<node> node, int pos){
    if(list.size == 0) return -1;

    if(pos <= 0) {
        list.head = list.head -> next;
        if (!list.head) {
            list.tail = nullptr;
        }
    } else if (pos >= list.size - 1) {
        auto previous_node = list.head;
        while (previous_node -> next != list.tail) {
            previous_node = previous_node -> next;
        }
        previous_node -> next = nullptr;
        list.tail = previous_node;
    } else {
        auto previous_node = list.head;
        for (int i = 0; i < pos - 1; ++i) {
            previous_node = previous_node -> next;
        }
        previous_node->next = previous_node -> next -> next;
    }
    list.size--;
    return 0;
}

void print_list(list list){
    auto node = list.head;
    for (int i = 0; i < list.size; ++i){
        cout << node -> value << endl;
        node = node -> next;
    }
}
