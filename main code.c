#include <kipr/wombat.h>

void black_line(){
    create3_connect();
    double velocity = 0.15;
    while (velocity != 0){
        if (create3_sensor_cliff(2)<2204){
            create3_drive_straight(0.09,0.39);
            printf("found Black\n");
            velocity = 0;
        }
        create3_velocity_set_components(velocity, 0);
    }

    create3_wait();
    // return 0;

}

void line_follow(){
    enable_servos();
    set_servo_position(3,877);
    msleep(500);
    int mid = 1000;
    create3_connect();
    while(analog(0) < 2800){
        if (analog(2)>= mid){
            create3_velocity_set_components(0.1,0.1);
        }
        else{
            create3_velocity_set_components(0.1,-0.1); 
        }
    }
    create3_velocity_set_components(0,0);
    set_servo_position(3,1500);
    msleep(500);
}



void follow_towards(int farness, float speed){
    while(analog(0) < farness){
        create3_drive_straight(0.1,speed);
    }
}
void rotate(){
    create3_rotate_degrees(45,45);
}

void pick_up_object_code(){
    set_servo_position(0,1290);
    set_servo_position(1,1559);
    set_servo_position(3,2000);
    msleep(1000);
}
void turn_value(){
    int v = 0;
    printf("V is %d", v);
}
int main()
{  
    wait_for_light(5);
    msleep(70000);
    printf('Paarrrtttytime');
    enable_servos();
    set_servo_position(0,1122);
    msleep(500);
    create3_connect();
    create3_rotate_degrees(45,90);
    //set_servo_position(0,1810);
    //set_servo_position(1,0);
    //set_servo_position(2,100);
    create3_drive_straight(0.4,0.49);
    black_line();
    create3_rotate_degrees(95,90);
    line_follow();

    //pick_up_object_code();

    //part 2
    create3_drive_straight(-0.03,0.49);
    create3_rotate_degrees(90,90);
    create3_drive_straight(0.3,0.49);
    create3_rotate_degrees(90,90);
    create3_drive_straight(-0.3,0.49);

    while(analog(2)<1000){
        create3_velocity_set_components(0.1,0);

    }
    create3_drive_straight(-0.1,0.49);
    set_servo_position(0,2047);
    msleep(500);
    set_servo_position(3,279);
    msleep(500);
    // black_line();
    //create3_rotate_degrees(90,90);
    // create3_drive_straight(0.2,0.49);
    // black_line();
    //set_servo_position(3,1000);
    //msleep(400);
    //create3_rotate_degrees(180,90);
    //black_line();
    //create3_rotate_degrees(-90,90);
    printf("Done");
    printf("Hello World\n");
    return 0;
}
//port 0 870
//port 1 1670
//port 2 1000

// pick up location
// port 0 1170
// port 1 1560