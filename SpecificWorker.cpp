/* 
 * File:   SpecificWorker.cpp
 * Author: mru
 * 
 * Created on 27 de diciembre de 2011, 16:13
 */

#include "SpecificWorker.h"

template <class MyTypeData>
void SpecificWorker<MyTypeData>::do_job(Task<MyTypeData> task){
	Poco::Thread *th = Poco::Thread::current();
	int id = th->id();
	std::cout << "\nTHREAD ID::";
	std::cout << id;
	std::cout << "DATA::";
	std::cout << task.get_data();
        th->yield();
};

