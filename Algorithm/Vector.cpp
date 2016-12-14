#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v;

    v.push_back(10);
    v.push_back(12);
    v.push_back(17);
    v.push_back(28);

    cout << v.size() << endl;

    v.push_back(118);
    v.push_back(117);
    v.push_back(220);

    cout << v.size() << endl;

    int sz = v.size();
    for(int i = 0; i < sz; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout << v.size() << endl;

    sz = v.size();
    for(int i = 0; i < sz; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}
