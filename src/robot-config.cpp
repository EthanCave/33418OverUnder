#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor L1 = motor(PORT12, ratio6_1, true);
motor L2 = motor(PORT16, ratio6_1, true);
motor L3 = motor(PORT11, ratio6_1, true);
motor R1 = motor(PORT13, ratio6_1, false);
motor R2 = motor(PORT14, ratio6_1, false);
motor R3 = motor(PORT15, ratio6_1, false);
digital_out JackIsGettingBackWit = digital_out(Brain.ThreeWirePort.C);
motor Puncher = motor(PORT2, ratio36_1, false);
controller Controller1 = controller(primary);
digital_out hHisExGirlfriend = digital_out(Brain.ThreeWirePort.D);
inertial Inertial9 = inertial(PORT9);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}