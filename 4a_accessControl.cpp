#include <iostream>
using namespace std;
class resource
{
    static int res;

public:
    static int getr();
    void free_res()
    {
        res = 0;
    }
};
int resource::res;
int resource::getr()
{   
    if (res)
        return 0;
    else
    {
        res = 1;
        return 1;
    }
}

int main()
{
    resource a, b;
    if (resource::getr())
        cout << "Resource under use, object a is using \n";
    if (!resource::getr())
        cout << "Resource busy, object b access denied \n";
    a.free_res();
    if (resource::getr())
        cout << "Resource can now be used by Object b \n";
    return 0;

}