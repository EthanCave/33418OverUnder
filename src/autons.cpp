#include "vex.h"
int pneu1() {
    return 0;
  }
void retract1() {
  FlapRight.set(true);
  FlapLeft.set(true);
  };
void retractleft() {
  FlapLeft.set(true);
}
void outleft() {
  FlapLeft.set(false);
}
 void out1() {
  FlapRight.set(false);
  FlapLeft.set(false);
    };
void launch1() {
  Puncher.spin(reverse,100, percent);
}
void stopLaunch1() {
  Puncher.stop();
}

void default_constants(){
  chassis.set_drive_constants(10, 1.5, 0, 10, 0);
  chassis.set_heading_constants(6, .4, 0, 1, 0);
  chassis.set_turn_constants(12, .4, .03, 3, 15);
  chassis.set_swing_constants(12, .3, .001, 2, 15);
  chassis.set_drive_exit_conditions(1.5, 300, 5000);
  chassis.set_turn_exit_conditions(1, 300, 3000);
  chassis.set_swing_exit_conditions(1, 300, 3000);
}

void odom_constants(){
  default_constants();
  chassis.drive_max_voltage = 8;
  chassis.drive_settle_error = 3;
}

void drive_test(){
  odom_constants();
  chassis.drive_max_voltage = 5;
  chassis.turn_max_voltage = 5;
  chassis.set_coordinates(0, 0, 0);
  chassis.drive_to_point(0,23);
  chassis.turn_to_point(-21.2,44.2);
  chassis.drive_to_point(-21.2, 44.2);
  chassis.turn_to_point(-21.2,74.2);
  chassis.drive_to_point(-21.4,74.2);
  chassis.turn_to_point(0,95.3);
  chassis.drive_to_point(0,95.3);
  chassis.turn_to_point(0,109.3);
  chassis.drive_to_point(0,110);
};

void left_side(){
  chassis.drive_timeout = 2000;
  chassis.turn_timeout = 2000;
  chassis.swing_timeout = 2000;
  chassis.drive_distance(33);
  chassis.left_swing_to_angle(45);
  chassis.drive_distance(-10);
  chassis.drive_distance(20);
  chassis.drive_distance(-10);
  chassis.left_swing_to_angle(0);
  chassis.drive_distance(-10);
  retractleft();
  chassis.drive_distance(-20);
  chassis.turn_to_angle(-45);
  outleft();
  chassis.right_swing_to_angle(0);
  chassis.drive_distance(-3);
  chassis.turn_to_angle(-45);
  chassis.drive_distance(-35);
};

void right_side(){
  chassis.drive_distance(30);
  chassis.left_swing_to_angle(-45);
  chassis.drive_max_voltage = 3;
  chassis.drive_distance(10);
  chassis.set_heading(0);
  chassis.drive_max_voltage = 8;
  chassis.drive_distance(-10);
  chassis.turn_to_angle(45);
  retract1();
  chassis.left_swing_to_angle(90);
  out1();
};
void auton_skills(){
  odom_constants();
  chassis.set_coordinates(0, 0, 0);
  chassis.drive_to_point(40, 18);
  chassis.drive_to_point(0,0);
  
};
