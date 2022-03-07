#ifndef num_h
#define num_h
#include <iostream>
using namespace std;
class Num_decompose
{
    // 宣告 public 的成員
public:
    void inputVal();
    int input_value;
    int *get_quotient();
    int *get_remainder();
    int get_index();
    void set_combine_array(int index,int quotient[],int remainder[]);
    void get_value(int combine_array[]);
    int combine_array[6];
private:
    int quotient[10];
    int remainder[10];
    int index;
    int length=10;
    
    //int combine_array[10];
    //void set_length();
    void set_quotient(int m[10]);
    void set_index(int index);
    void set_remainder(int m[10]);
    double myPow(double x, int n);
    void judge_num(int);
};
#endif