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

template <class MyTypeData>
Task<MyTypeData> Pool<MyTypeData>::pop() {
    Task<MyTypeData> taskPopped;
    mux.lock();
    if (!qeue.empty()) {
        taskPopped = qeue.front();
        qeue.pop_front();
    }
    mux.unlock();
    return taskPopped;
};

template <class MyTypeData>
void Pool<MyTypeData>::push(Task<MyTypeData> task) {
    mux.lock();
    qeue.push_front(task);
    mux.unlock();
};

template <class MyTypeData>
bool Pool<MyTypeData>::empty() {
    bool r = qeue.empty();
    return r;
};