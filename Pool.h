/*
 *  Pool.h
 *  Task.cpp
 *
 *  Created by mru on 26/12/11.
 *  Copyright 2011 tid. All rights reserved.
 *
 */
#ifndef POOL_H
#define POOL_H

#include "Poco/Mutex.h"
#include "Poco/ScopedLock.h"
#include <iostream>
#include <ostream>
#include <sstream>
#include <deque>
#include "Task.h"

template <class MyTypeData>
class Pool{
public:
        Pool(){};
        Pool(const Pool& o) {}; 
        Task<MyTypeData> pop(); 
        void push(Task<MyTypeData>);
        bool empty();

private:
      Poco::Mutex mux;
      std::deque<Task <MyTypeData> > qeue;
};

#endif