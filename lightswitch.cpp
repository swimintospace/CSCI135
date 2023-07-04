#include <iostream>
using namespace std;

class Circuit{
private: 
    int first_switch, second_switch, lamp_state;

public:
    Circuit();
    int get_first_switch_state();
    int get_second_switch_state();
    int get_lamp_state();
    void toggle_first_switch();
    void toggle_second_switch();
};

Circuit::Circuit(){
    first_switch = 0;
    second_switch = 0;
    lamp_state = 0;
}

int Circuit::get_first_switch_state(){
    return first_switch;
}

int Circuit::get_second_switch_state(){
    return second_switch;
}

int Circuit::get_lamp_state(){
    return lamp_state;
}

void Circuit::toggle_first_switch(){
    if(first_switch == 0){
        first_switch = 1;
        lamp_state = 1;
    }
    else{
        first_switch = 0;
        lamp_state = 0;
    }
}

void Circuit::toggle_second_switch(){
    if(second_switch == 0){
        second_switch = 1;
        lamp_state = 1;
    }
    else{
        second_switch = 0;
        lamp_state = 0;
    }
}

int main(){
    Circuit w;
    w.toggle_first_switch();
    cout << w.get_first_switch_state() << endl;
    cout << w.get_lamp_state() << endl;
    w.toggle_second_switch();
    cout << w.get_second_switch_state() << endl;
    cout << w.get_lamp_state() << endl;
    w.toggle_second_switch();
    cout << w.get_second_switch_state() << endl;
    cout << w.get_lamp_state() << endl;
}