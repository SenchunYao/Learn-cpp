#include <iostream>

int main() {
    int val, sum = 0;
    // EOF:
    //   * UNIX - Ctrl + D
    //   * Windows - Ctrl + Z
    // EOF或者无效输入会使条件为false
    while(std::cin>>val){
        sum+=val;
    }
    std::cout<<"Sum is: "<<sum<<std::endl;
    return 0;
}