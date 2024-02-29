#include <iostream>
#include <string>

using namespace std;

string rot13(string msg)
{   
    for(int i = 0; i < msg.length(); i++){
        int msg_value = msg[i];
        if(msg_value >= 'a' && msg_value <= 'z'){
            //lower alphabet
            msg_value = msg_value - 97;
            msg_value = (msg_value + 13) % 26;
            msg_value = msg_value + 97;
            msg[i] = msg_value;
            continue;
        }else if(msg_value >= 'A' && msg_value <= 'Z'){
            msg_value = msg_value - 65;
            msg_value = (msg_value + 13) % 26;
            msg_value = msg_value + 65;
            msg[i] = msg_value;
            continue;
        }
    }
    return msg;
}

int main(){
    int test = 'A';
    cout << rot13("AbCd") << endl;
    return 0;
}