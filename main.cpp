#include <iostream>

// 須引進標頭檔
#include "num/num.h"
#include "num/num.cpp"

using namespace std;

struct Room
{
    int input_room_amunnt;
    string hotel_name;
    int *amount = new int[input_room_amunnt];
} Room_info;

void test(int input)
{
    Num_decompose C1;
    C1.input_value = input;
    C1.inputVal();

    int *quotient = C1.get_quotient();
    int *remainder = C1.get_remainder();
    // for (int i = 0; i < 10; ++i)
    // {
    //     cout << quotient[i] << endl;
    // }
    // cout << "next" << endl;
    // for (int i = 0; i < 10; ++i)
    // {
    //     cout << remainder[i] << endl;
    // }
    cout << "next" << endl;
    cout << "next ont " << endl;
    C1.set_combine_array(C1.get_index(), quotient, remainder);
    // int marks[10] = {20, 2, 75, 112};
    // C1.get_value(marks);
    C1.get_value(C1.combine_array);
}

int main()
{

    //C1.get_value(C1.combine_array);

    //int input_room[8] = {101,102,103,104,105,106,107,108};
    //int get
    //test(1329135);
    Room_info.input_room_amunnt = 5;
    Room_info.hotel_name = "chase";
    //cout << Room_info.input_room_amunnt << endl;
    //int amount[Room_info.input_room_amunnt]={0};
    //cout << sizeof(Room_info.amount) / sizeof(Room_info.amount[0]) << endl;
    int input_room[5] = {101, 102, 103, 104};
    for (int i = 0; i < Room_info.input_room_amunnt; ++i)
    {
        Room_info.amount[i] = input_room[i];
        //cout << Room_info.amount[i] << endl;
    }
    test(701);
    
}
