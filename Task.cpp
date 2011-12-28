/*
 *  Task.cpp
 *  Task.cpp
 *
 *  Created by mru on 26/12/11.
 *  Copyright 2011 tid. All rights reserved.
 *
 */

#include "Task.h"

template <class TypeData>
TypeData Task<TypeData>::get_data() const{
	return data;
};

template <class TypeData>
void Task<TypeData>::set_data(TypeData d){
	data=d;
};

