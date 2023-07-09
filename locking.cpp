#include<iostream>
using namespace std;

class resource {
    static int res;

public:
    static int getr();   // Static function to get the resource
    void free_res();     // Member function to free the resource
};

int resource::res;       // Definition of the static member variable 'res'

int resource::getr() {
    if (res)
        return 0;       // If resource is already in use, return 0

    res = 1;            // Set resource to 'in use' state
    return 1;           // Return 1 to indicate successful acquisition of the resource
}

void resource::free_res() {
    res = 0;            // Free the resource by setting 'res' to 0
}

int main() {
    resource a, b;

    if (resource::getr())
        cout << "Resource under use, object a is using\n";

    if (!resource::getr())
        cout << "Resource busy, object b access denied\n";

    a.free_res();       // Free the resource held by object 'a'

    if (resource::getr())
        cout << "Resource can now be used by object b\n";

    return 0;
}
