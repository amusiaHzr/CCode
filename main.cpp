#include <iostream>
#include "ArrayList.h"

using namespace std;

int main() {
    ArrayList arrayList = ArrayList(32);
    arrayList.add(1);
    arrayList.add(2);
    arrayList.add(3);
    arrayList.add(4);
    arrayList.add(5);
    arrayList.add(6);
    arrayList.add(7);
    arrayList.add(8);
    arrayList.add(9);
    arrayList.add(10);
    cout << "arrayList.get " << arrayList.get(8) << endl;
    arrayList.remove(5);
    arrayList.toString();
    return 0;
}
