//
//  Deque.cpp
//  Deque
//
//  Created by Hunaid Hassan on 22/11/2017.
//  Copyright © 2017 Hunaid Hassan. All rights reserved.
//

#include "Deque.h"

Deque::Deque(int size) {
    this->size = size;
    front = back = -1;
    arr = new int[size];
}

Deque::~Deque() {
    delete [] arr;
}

bool Deque::isEmpty() {
    return front == -1 && back == -1;
}

bool Deque::isFull() {
    return front == 0 && back == size - 1;
}

void Deque::makeEmpty() {
    front = back = -1;
}

bool Deque::insertAtFront(int num){
    if (front == 0) {
        return false;
    }
    if (front ==- 1){
        front = 0;
        arr[++back] = num;
    }else if (front != 0){
        arr[--front] = num;
    }
    return true;
}

bool Deque::insertAtBack(int num) {
    if (back == size -1){
        return false;
    }
    if (front == -1){
        front++;
        back++;
    }else {
        back++;
    }
    arr[back] = num;
    return true;
}

bool Deque::removeFromFront(int & num) {
    if (front == -1) {
        return false;
    }
    if (front == back) {
        front = back = -1;
    }else{
        front++;
    }
    return true;
}

bool Deque::removeFromBack(int & num) {
    if (back == -1) {
        return false;
    }
    if (front == back) {
        front = back = -1;
    }else{
        back--;
    }
    return true;
}














