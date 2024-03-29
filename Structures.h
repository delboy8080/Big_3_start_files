#pragma once
#include <iostream>
using namespace std;

struct Point // used with the polygon
{
	int x;
	int y;
    Point()
    {
        x= y = 0;
    }

    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

};

struct Course // used with the student
{
	int ID;
	string title;
};


struct Question // used with the quiz
{
	string question;
	string answer;
};