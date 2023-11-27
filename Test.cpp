#include "Vector.cpp"

Vector<int> v;

int main() {

    v.push_back(12);
    v.push_back(10);
    v.push_back(5);
    v.push_back(1);
    v.push_back(1000);
    v.push_back(25);

    cout << v[0]->getData() << endl;
    cout << v[2]->getNext()->getData() << endl;
    cout << v.getSize();

}