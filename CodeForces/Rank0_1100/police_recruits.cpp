//
//  police_recruits.cpp
//  CodeForces
//
//  Created by Gino Contestabile on 15/08/22.
//

#include "police_recruits.hpp"



int police::solve(int number_events, int events[]) {
    int number_untreated_events = 0;
    int number_free_police_officers = 0;
    for(int i = 0; i<number_events; i++) {
        if(events[i] == -1) {
            if(number_free_police_officers <= 0) {
                number_untreated_events++;
                continue;
            } else {
                number_free_police_officers += -1;
            }
        } else {
            number_free_police_officers += events[i];
        }
    }
    return number_untreated_events;
    }




