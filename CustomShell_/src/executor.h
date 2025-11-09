#ifndef EXECUTOR_H
#define EXECUTOR_H

#include <vector>
#include <string>
#include "parser.h"

class Executor {
public:
    static void executeCommand(const Command &cmd);
};

#endif
