//
//  Deque.hpp
//  Deque
//
//  Created by Hunaid Hassan on 22/11/2017.
//  Copyright © 2017 Hunaid Hassan. All rights reserved.
//

#ifndef Deque_h
#define Deque_h
class Deque {
private:
    int * arr;
    int size;
    int front;
    int back;
public:
    Deque(int);
    ~Deque();
    bool isEmpty();
    bool isFull();
    void display();
    void makeEmpty();
    bool insertAtFront(int);
    bool insertAtBack(int);
    bool removeFromFront(int &);
    bool removeFromBack(int &);
};
#endif /* Deque_hpp */
