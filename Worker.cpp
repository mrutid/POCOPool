/*
 *  worker.cpp
 *  Task.cpp
 *
 *  Created by mru on 26/12/11.
 *  Copyright 2011 tid. All rights reserved.
 *
 */

#include "Worker.h"
#include "Task.h"
template <class MyTypeData>
Task<MyTypeData> Worker<MyTypeData>::take_new_job(){
	Task<MyTypeData> task = job_pool.pop();
	return task;
};

template <class MyTypeData>
void Worker<MyTypeData>::run(){
    while (!job_pool.empty()){
        Task<MyTypeData> task = take_new_job();
	do_job(task);       
	}
    }