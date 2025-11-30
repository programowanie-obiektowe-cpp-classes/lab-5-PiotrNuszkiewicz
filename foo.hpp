#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result(people.size());
    size_t currentIndex = people.size();
    for (auto& human : people) {

       
        char val = human.isMonster() ? 'n' : 'y';
        human.birthday();
        result[--currentIndex] = val;
    }
    
 
    return result;
}
