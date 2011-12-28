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

 
Task Pool::pop() {
    Task taskPopped;
    mux.lock();
    if (!qeue.empty()) {
        taskPopped = qeue.front();
        qeue.pop_front();
    }
    mux.unlock();
    return taskPopped;
};

void Pool::push(Task task) {
    mux.lock();
    qeue.push_front(task);
    mux.unlock();
};


bool Pool::empty() {
    bool r = qeue.empty();
    return r;
};