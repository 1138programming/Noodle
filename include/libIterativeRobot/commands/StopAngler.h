#ifndef _COMMANDS_STOPARM_H_
#define _COMMANDS_STOPARM_H_

#include "libIterativeRobot/commands/Command.h"

class StopAngler: public libIterativeRobot::Command {
  public:
    bool canRun();
    void initialize();
    void execute();
    bool isFinished();
    void end();
    void interrupted();
    void blocked();
    StopAngler();
  private:
};

#endif // _COMMANDS_STOPARM_H_
