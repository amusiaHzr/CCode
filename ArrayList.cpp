//
// Created by Amusia on 2021/3/25.
//

#include "ArrayList.h"

using namespace std;

#include <iostream>

ArrayList::ArrayList() {
    this->size = 16;
    this->actualSize = 0;
    this->arr = new int[this->size];
}

ArrayList::ArrayList(int capacity) {
    this->size = capacity;
    this->actualSize = 0;
    this->arr = new int[this->size];
}

ArrayList::ArrayList(const ArrayList &arrayList) {
    this->actualSize = arrayList.actualSize;
    this->size = arrayList.size;
    this->arr = new int[this->size];
    //深拷贝处理
    for (int i = 0; i < this->size; ++i) {
        this->arr[i] = arrayList.arr[i];
    }
}

ArrayList::~ArrayList() {
    delete[] this->arr;
}

void ArrayList::add(int value) {
    add(value, actualSize);
}

void ArrayList::add(int value, int index) {
    if (index < 0 || index > size) {
        return;
    }

    if (index > size * 0.75) {
        resize();
    }
    arr[index] = value;
    this->actualSize++;
}

void ArrayList::resize() {
    int newLength = 2 * size;
    int *newArr = new int[newLength];
    for (int i = 0; i < this->size; ++i) {
        newArr[i] = this->arr[i];
    }
    delete[] this->arr;
    this->arr = newArr;
    this->size = newLength;
}

int ArrayList::get(int index) {
    if (index < 0 || index > size) {
        return -1;
    }
    return this->arr[index];
}

void ArrayList::remove(int index) {
    if (index < 0 || index > size) {
        return;
    }
    //如果是其他类型的数据，需要释放掉内存 delete or free
    //int removeElement = this->arr[index];

    for (int i = index; i < this->actualSize - 1; ++i) {
        this->arr[i] = this->arr[i + 1];
    }
    this->arr[actualSize--] = 0;
}

int ArrayList::getLength() {
    return actualSize;
}

bool ArrayList::isEmpty() {
    return !actualSize;
}

void ArrayList::toString() {
    cout << "length = " << this->getLength() << endl;
    cout << "size = " << this->size << endl;
    cout << "[";
    for (int i = 0; i < this->actualSize; ++i) {
        cout << this->arr[i];
        if (i < actualSize - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}


