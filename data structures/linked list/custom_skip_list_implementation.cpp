#include <iostream>

template <typename T>
class SkippedList;

template <typename T>
class Node{
    T value;
    Node<T>* nextPtr;

    public:
        Node(int value){
            this->value = value;
            this->nextPtr = nullptr;
        }

        ~Node(){
            delete nextPtr;
        }

        void insert(SkippedList<T>* list, Node<T>* node){
            if(nextPtr){
                nextPtr->insert(list, node);
                return;
            }
            nextPtr = node;
            int value = rand()%10;
            if (value > 5){
                list->head[1]->insert(this);
                if(value > 5){
                    list->head[2]->insert(this);
                }
            }
        }
};

template <typename T>
class NodeList{
    public:
        Node<T>* current;
        NodeList<T>* next;

        NodeList(){
            current = nullptr;
            next = nullptr;
        }

        void insert(Node<T>* node){
            if(next){
                next -> insert(node);
            }
            current = node;
        }
};

template <typename T>
class SkippedList{

    public:
        NodeList<T>* head[3];
        SkippedList(){
            for (int i = 0; i < 3; ++i) {
                head[i] = new NodeList<T>();
            }
        }

        void insert(T value){
            Node<T>* node = new Node<T>(value);
            if(head[0]->current){
                head[0]->current->insert(this, node);
                return;
            }

            head[0] = new NodeList<T>();
            head[1] = new NodeList<T>();
            head[2] = new NodeList<T>();

            head[0]->current = node;
            head[1]->current = node;
            head[2]->current = node;
        }
};

int main(){
    SkippedList<int>* newList = new SkippedList<int>();
    newList->insert(1);
    newList->insert(2);
    newList->insert(3);
    std::cout << "Hello World" << std::endl;
    return 0;
}