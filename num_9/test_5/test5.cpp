#include "test5.h"
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    Stack st;
    customer temp;
    strcpy(temp.fullname, "one");
    temp.payment = 1;
    st.push(temp);

    strcpy(temp.fullname, "two");
    temp.payment = 2;
    st.push(temp);

    st.pop(temp);
    return 0;
}


