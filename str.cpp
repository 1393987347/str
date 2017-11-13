#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

template <class T>
class Ptr
{
    private:
        T *p;
        int len;
    public:
        Ptr(T *str)
        {
            Ptr p = new Ptr;
            p = str;
        }
        ~Ptr()
        {
            delete p;
        }
        friend Ptr operator* (const Ptr &str1, const Ptr &str2);
};

template <class T>
void operator* (const Ptr &str1, const Ptr &str2)      //使用模板名‘Ptr’时不带实参表无效?
{
    Ptr str;
    str.len = str1.len + str2.len;
    cout << "有输出" << endl;
    
}



int main(void)
{
    int i=2;
    int *j=&i;
    
    Ptr a(j);  
}