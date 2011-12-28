/* 
 * File:   SpecificWorker.h
 * Author: mru
 *
 * Created on 27 de diciembre de 2011, 16:13
 */

#ifndef SPECIFICWORKER_H
#define	SPECIFICWORKER_H
#include "Worker.cpp";
template <class MyTypeData>
class SpecificWorker: public Worker<MyTypeData>{
public:
    SpecificWorker(Pool<MyTypeData>& pool):Worker<MyTypeData>(pool){};
    //overrride do_job method
    void do_job(Task<MyTypeData> task);
private:

};

#endif	/* SPECIFICWORKER_H */

