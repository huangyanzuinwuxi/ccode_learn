
#include "test8.h"

using namespace std;

void showfilm(Item&item)
{
    printf("the title is %s, rating is %d\n", item.title, item.rating);
}

int main()
{
    List movies;
    Item temp;  //创建一个临时结构体，中间替换
    /*if(movies.isfull()) {
        printf("No more room in list!Bye!\n");
        exit(1);
    }*/
    printf("Enter first movie title:\n");
    while(cin.getline(temp.title, TSIZE) && temp.title[0]!='\0')
    {
        printf("请输入等级<1-10>:\n");
        cin>>temp.rating;
        while(cin.get()!='\n')
            continue;

        if(movies.additem(temp)==false) {
            printf("List is already full!\n");
            break;
        }
        if(movies.isfull() == true) {
            printf("you had fulled the list!\n");
        } else if (movies.isempty() == true) {
            printf("no data entry!\n");
        } else {
            printf("Here is the movie list:\n");
            movies.visit(showfilm);
        }
        printf("end!");

    }
    return 0;
}

