#include <iostream>

using namespace std;

template <typename T>
class one_way_list{
    
    T value;
    one_way_list *next;
    public:
        one_way_list(T value){
            this->value = value;
            this->next = nullptr;
        }

        ~one_way_list(){
            delete next;
        }
    
        void add_element(T value){
            if(next){
                next->add_element(value);
                return;
            }
            next = new one_way_list(value);
        }

        T get_value(size_t index){
            if(index == 0){
                return value;
            }
            return next->get_value(index-1);
        }

};

int main(){
    one_way_list<int> my_list = one_way_list<int>(5);
    my_list.add_element(10);
    my_list.add_element(20);
    std::cout << "Hello World" << std::endl;
    return 0;
}