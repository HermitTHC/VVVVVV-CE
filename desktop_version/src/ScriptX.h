#ifndef SCRIPTX_H
#define SCRIPTX_H

#include <string>
#include <vector>
#include "Game.h"

#include "Enums.h"


class scriptx
{
public:


    scriptx();

    growing_vector<std::string> tokenize(std::string);
    void update();

    bool running;
    growing_vector<std::string> commands;
    int position;
    int scriptdelay;
    bool async;

};

#endif /* SCRIPTX_H */
