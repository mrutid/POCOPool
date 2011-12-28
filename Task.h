/*
 *  Task.h
 *  Task.cpp
 *
 *  Created by mru on 26/12/11.
 *  Copyright 2011 tid. All rights reserved.
 *
 */
#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <ostream>

template <class TypeData>
class Task {
public:
        Task(){};
        Task(TypeData d): data(d){};
	TypeData get_data() const;
	void set_data(TypeData d);
private:
	TypeData data;
};

#endif