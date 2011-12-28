/*
 *  worker.h
 *  Task.cpp
 *
 *  Created by mru on 26/12/11.
 *  Copyright 2011 tid. All rights reserved.
 *
 */
#ifndef WORKER_H
#define WORKER_H

#include "Pool.h"
#include "Poco/Thread.h"
#include "Poco/Runnable.h"
#include <iostream>
#include <ostream>
#include <sstream>

template <class MyTask>
class Worker: public Poco::Runnable { 
public: 
	Worker(Pool<MyTask>& pool):job_pool(pool){}; 
	void run();
private:
	Pool<MyTask>& job_pool;
	MyTask take_new_job();
	virtual void do_job(MyTask)=0;	
};

#endif