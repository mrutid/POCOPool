/* 
 * File:   SpecificWorker.h
 * Author: mru
 *
 * Created on 27 de diciembre de 2011, 16:13
 */

#ifndef SPECIFICWORKER_H
#define	SPECIFICWORKER_H
#include "Worker.cpp";
template <class MyTask>
class SpecificWorker: public Worker<MyTask>{
public:
    SpecificWorker(Pool<MyTask>& pool):Worker<MyTask>(pool){};
    //overrride do_job method
    void do_job(MyTask task);
private:

};

#endif	/* SPECIFICWORKER_H */

