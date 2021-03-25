//
// Created by Amusia on 2021/3/25.
//

#ifndef UNTITLED_ARRAYLIST_H
#define UNTITLED_ARRAYLIST_H


class ArrayList {
public:
    int size; //数组大小
    int actualSize; //最后一个元素坐标
    int *arr; //数组

public:
    //无参构造函数
    ArrayList();

    explicit ArrayList(int capacity);

    ArrayList(const ArrayList &arrayList);

    ~ArrayList();

    void  add(int value);

    int get(int index);

    void remove(int index);



    int getLength();

    bool isEmpty();

    void toString();

private:
    void  add(int value,int actualSize);
    void resize();
};


#endif //UNTITLED_ARRAYLIST_H
