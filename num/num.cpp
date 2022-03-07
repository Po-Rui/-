// ���޶i���Y��
#include "num.h"

void Num_decompose::inputVal()
{
    constexpr int len = 10;
    int quotient[len] = {0};
    int remainder[len] = {0};
    int get_val = 0;
    int i = 0;
    if (input_value < 0 || input_value > 10000000000)
    {
        cout << "inputerror" << endl;
    }
    else if (input_value < 90000000)
    {
        do
        {
            quotient[i] = input_value / 255;
            remainder[i] = input_value % 255;
            input_value = quotient[i];
            i = i + 1;
            set_index(i);
        } while (quotient[i - 1] > 255);
    }
    for (int i = 0; i < len; i++)
    {
        //cout << quotient[i] << endl;
        if (quotient[i] == 0)
        {
            break;
        }
    }
    for (int i = 0; i < len; i++)
    {
        //cout << remainder[i] << endl;
        if (quotient[i] == 0)
        {
            break;
        }
    }
    set_quotient(quotient);
    set_remainder(remainder);
 
}
void Num_decompose::get_value(int combine_array[10])
{
    int get_val = 0;
    for (int i = 0; i < length; i++)
    {
        cout<<combine_array[i] << endl;
    }
    
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
        {
            get_val = combine_array[i] * myPow(255, combine_array[1]);
        }
        else if (i >= 2)
        {
            get_val = get_val + combine_array[i] * myPow(255, i - 2);
        }
    }
    cout << get_val << endl;
}
void Num_decompose::set_combine_array(int index, int quotient[10], int remainder[10])
{

    for (int i = 0; i < length; i++)
    {
        combine_array[i] == 0;
    }
    for (int i = 0; i <length; ++i)
    {
        if (i == 0)
        {
            combine_array[0] = quotient[index - 1];
        }
        else if (i == 1)
        {
            combine_array[1] = index;
        }
        else
        {
            combine_array[i] = remainder[i - 2];
        }
    }
}
// setter �P getter �������
void Num_decompose::set_quotient(int m[10])
{
    for (int i = 0; i < 10; ++i)
    {
        quotient[i] = m[i];
    }
}
void Num_decompose::set_index(int index)
{
    this->index = index;
}
void Num_decompose::set_remainder(int m[10])
{
    for (int i = 0; i < 10; ++i)
    {
        remainder[i] = m[i];
    }
}
int Num_decompose::get_index()
{
    return index;
}
int *Num_decompose::get_quotient()
{
    return quotient;
}
int *Num_decompose::get_remainder()
{
    return remainder;
}
double Num_decompose::myPow(double x, int n)
{
    if (n == 0)
        return 1; //���ƥk���̫�o��0
    if (n == 1)
        return x;
    if (n == -1)
        return 1 / x; //�t�ƥk���û��O�t��,�[�@�ӧP�_
    double temp = myPow(x, n >> 1);
    if (n & 1)
        return temp * temp * x;
    else
        return temp * temp;
}
