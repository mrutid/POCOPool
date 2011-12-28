/*
 *  Pool.cpp
 *  Task.cpp
 *
 *  Created by mru on 26/12/11.
 *  Copyright 2011 tid. All rights reserved.
 *
 */

#include "Pool.h"
#include <iostream>
#include <ostream>
#include <sstream>

template <class MyTask>
MyTask Pool<MyTask>::pop() {
    MyTask taskPopped;
    mux.lock();
    if (!qeue.empty()) {
        taskPopped = qeue.front();
        qeue.pop_front();
    }
    mux.unlock();
    return taskPopped;
};

template <class MyTask>
void Pool<MyTask>::push(MyTask task) {
    mux.lock();
    qeue.push_front(task);
    mux.unlock();
};

template <class MyTask>
bool Pool<MyTask>::empty() {
    bool r = qeue.empty();
    return r;
};