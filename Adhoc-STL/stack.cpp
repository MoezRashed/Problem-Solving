    #include <iostream> 
    #include <sys/resource.h> 
    
    int main() 
    { 
        struct rlimit lim; 
        getrlimit( RLIMIT_STACK, &lim ); 
        std::cout << lim.rlim_cur << "\n"; 
        std::cout << lim.rlim_max << "\n"; 
    } 