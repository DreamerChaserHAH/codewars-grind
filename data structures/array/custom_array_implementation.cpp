#include <iostream>

using namespace std;

template <typename T>
class custom_array{

    void* content;
    size_t length;
    size_t end_pointer;

    public:
        custom_array(size_t length){
            this->length = length;
            this->end_pointer = 0;
            content = malloc(this->length * sizeof(T));
        }

        ~custom_array(){
            free(content);
        }

        void add_element(T new_element){
            *reinterpret_cast<T*>(content + end_pointer * sizeof(T)) = new_element;
            this->end_pointer += 1;
        }

        T get_element(size_t index){
            return *reinterpret_cast<T*>(content + index * sizeof(T));
        }

        void delete_element(){
            this->end_pointer -= 1;
        }
};

int main(){
    custom_array<int> my_array(2);
    my_array.add_element(2);
    my_array.add_element(3);
    int num = my_array.get_element(1);
    return 0;
}