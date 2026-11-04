#pragma once
#include "student.h"

namespace SeoMinchae2649083
{
    class studentPtr
    {
        student *sPtr;
        public:
        studentPtr(const student& s = student{"name", 1234567, 0})
        :sPtr{new student{s}}{}

        ~studentPtr()noexcept{delete sPtr;

      std::cout << "move";
            sPtr = std::move.sPtr;
            move.sPtr = nullptr;
        }

        studentPtr(const studentPtr& copy)
        {sPtr = copy.sPtr? sPtr = new student{*copy.sPtr} : nullptr;}
        
        studentPtr(student&& move)noexcept
        {
        student& operator=(const studentPtr& copy)
        {
            if(this != &copy){delete sPtr; sPtr = copy.sPtr? 
                sPtr = new student{*copy.sPtr} : nullptr;}
            return *this;
        }
        }

        studentPtr& operator=(studentPtr&& move)noexcept
        {
            std::cout << "move";
            if(this != &move){
                delete sPtr;
                sPtr = move.sPtr;
                move.sPtr= nullptr;
            }
            return *this;
        }

void print() const
{
    if(sPtr)
    std::cout << *sPtr;
else std::cout << "no data";
}




    };

}