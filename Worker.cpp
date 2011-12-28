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
template <class MyTask>
MyTask Worker<MyTask>::take_new_job(){
	MyTask task = job_pool.pop();
	return task;
};

template <class MyTask>
void Worker<MyTask>::run(){
    while (!job_pool.empty()){
        MyTask task = take_new_job();
	do_job(task);       
	}
    }