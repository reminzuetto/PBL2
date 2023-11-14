#include "Vector.cpp"

Vector <int> v;

int main() {

    v.push_back(12);
    v.push_back(15);
    v.push_back(1);
    v.push_back(1000);
    v.push_back(25);
    cout << v[1]->data << endl;
    cout << v[3]->data;

}