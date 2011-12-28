/* 
 * File:   Server.cpp
 * Author: mru
 *
 * Created on 27 de diciembre de 2011, 10:37
 */

#include <cstdlib>
#include "Task.cpp"
#include "Pool.cpp"
#include "SpecificWorker.cpp"

int const N_THREADS = 20;
int const N_TASK = 1000;
using namespace std;
int main(int argc, char** argv) {
    //create some Task
    Task<int> tasks[N_TASK];
    //me gustaria no especializar a <typeDate>
    Pool<int> pool;
  
    for (int i=0;i<N_TASK; i++){
        tasks[i].set_data(i);
        //Push in the Pool
        pool.push(tasks[i]);
    }
    
    //Create some workers
SpecificWorker<int> wk (pool);

Poco::Thread thread[N_THREADS];
for(int i=0;i<N_THREADS;i++)
        thread[i].start(wk);

for(int i=0;i<N_THREADS; i++)
        thread[i].join();    
        
 return 0;
}

