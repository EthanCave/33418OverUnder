using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor L1;
extern motor L2;
extern motor L3;
extern motor R1;
extern motor R2;
extern motor R3;
extern digital_out JackIsGettingBackWit;
extern motor Puncher;
extern controller Controller1;
extern digital_out hHisExGirlfriend;
extern inertial Inertial9;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );