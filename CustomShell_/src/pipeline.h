#ifndef PIPELINE_H
#define PIPELINE_H

#include "parser.h"

class Pipeline {
public:
    static void execute(const Command &cmd);
};

#endif
