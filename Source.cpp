#include<iostream>
#include"KualaLumpur.h"
#define print(x) std::cout<<x<<std::endl

std::ostream& operator<<(std::ostream& os, const Vec2d& v) {
    return os << '{' << v.x << ',' << v.y << '}';
}

int main() {

    KualaLumpur* kualaLumpur = new KualaLumpur();
    print(kualaLumpur->isInside(Vec2d(3.1435929584150664, 101.68017658642691)));
    
    delete kualaLumpur;
    return 0;
}