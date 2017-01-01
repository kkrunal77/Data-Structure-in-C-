
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<bool> mask;
    mask.push_back(true);
    mask.flip();
    cout << boolalpha;
    for (unsigned i=0; i < mask.size();i++)
        cout << mask.at(i);

    return 0;
}
