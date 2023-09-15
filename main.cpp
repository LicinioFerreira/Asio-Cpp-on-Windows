/**

    Timer.1 - Using a timer synchronously

    Example from: https://think-async.com/Asio/asio-1.28.0/doc/asio/tutorial/tuttimer1.html

    This example shows how to perform a blocking wait on the timer.

*/


#include <iostream>
#include <asio.hpp>

int main() {
    
    /*
      Step 0. Creates an Asio I/O context  
    */
    asio::io_context ioContext;
    
    /*
      Step 1. The timer is set to expire after 5 seconds.
    */
    asio::steady_timer t(ioContext, asio::chrono::seconds(5));
    
    /*
      Step 2. It waits for 5 seconds   
    */
    t.wait();
  
    
    std::cout << "Hello, world!" << std::endl;
    

    return 0;
}