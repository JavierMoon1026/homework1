#include <iostream>
#include <memory>
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

shared_ptr<node> create_node(int value);

int push_front(list& list, shared_ptr<node> node);

int push_back(list& list, shared_ptr<node> node);

int insert(list& list,shared_ptr<node> node, int pos);

int erase(list& list, int pos);

void print_list(list& list);