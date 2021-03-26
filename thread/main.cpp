// thread example
#include "iostream"       // std::cout
#include <thread>         // std::thread

// class foo{
//     public:
//     cout<<"hello"<<'\n'; 
// };
 
void foo() 
{   while(true)
   std::cout<<"do stuff...10"<<'\n';
}

void bar()
{
    while(true)
    std::cout<<"do stuff...2"<<'\n';

}

int main() 
{
  std::thread first (foo);     // spawn new thread that calls foo()
  std::thread second (bar);  // spawn new thread that calls bar(0)

  std::cout << "main, foo and bar now execute concurrently...\n";

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes

  

    return 0;

}