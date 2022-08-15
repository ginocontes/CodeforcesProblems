//
//  main.cpp
//  CodeForces
//
//  Created by Gino Contestabile on 15/08/22.
//

#include <iostream>
#include "police_recruits.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 11;
    int events[] = {-1, -1, 2, -1, -1, -1, -1, -1, -1, -1 ,-1};

    
    
    cout << police::solve(n, events) << endl;
    return 0;

}
