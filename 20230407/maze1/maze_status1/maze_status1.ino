///////////////////////// sonar /////////////////////////
#include <NewPing.h>

#define SONAR_NUM 3      // Number of sensors.
#define MAX_DISTANCE 150 // Maximum distance (in cm) to ping.

#define Front 0
#define Left  1
#define Right 2

#define TRIG1 2 // 초으파 센서 1번 Trig 핀 번호 Front
#define ECHO1 3 // 초음파 센서 1번 Echi 핀 번호 Front

#define TRIG2 4 // 초으파 센서 2번 Trig 핀 번호 Left
#define ECHO2 5 // 초음파 센서 2번 Echi 핀 번호 Left

#define TRIG3 6 // 초으파 센서 3번 Trig 핀 번호 Right
#define ECHO3 7 // 초음파 센서 3번 Echi 핀 번호 Right
NewPing sonar[SONAR_NUM] = {   // Sensor object array.
  NewPing(TRIG1, ECHO1, MAX_DISTANCE), // Each sensor's trigger pin, echo pin, and max distance to ping.
  NewPing(TRIG2, ECHO2, MAX_DISTANCE),
  NewPing(TRIG3, ECHO3, MAX_DISTANCE)
};
float front_sonar  =0.0;
float left_sonar   =0.0;
float right_sonar  =0.0;

///////////////////////// L298 /////////////////////////
#define ENA 8
#define IN1 9
#define IN2 10
#define IN3 11
#define IN4 12
#define ENB 13
/////////////////// Maze Status ////////////////////////
int maze_status = 0;

void setup() 
{
  // put your setup code here, to run once:
  /*
  pinMode(TRIG1, OUTPUT);
  pinMode(ECHO1,  INPUT);
  
  pinMode(TRIG2, OUTPUT);
  pinMode(ECHO2,  INPUT);

  pinMode(TRIG3, OUTPUT);
  pinMode(ECHO3,  INPUT);
  */
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(115200); // 통신속도를 115200으로 정의함
}

long sonar_Front(void) // 초음파 센서 1번 측정 함수 
{
  long duration,distance;
  digitalWrite(TRIG1, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG1, LOW);
  duration = pulseIn(ECHO1, HIGH);
  distance = ( (float)(340*duration)/1000)/2; 
  return distance;
}

long sonar2(void) // 초음파 센서 2번 측정 함수 
{
  long duration,distance;
  digitalWrite(TRIG2, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG2, LOW);
  duration = pulseIn(ECHO2, HIGH);
  distance = ( (float)(340*duration)/1000)/2; 
  return distance;
}

long sonar3(void) // 초음파 센서 3번 측정 함수 
{
  long duration,distance;
  digitalWrite(TRIG3, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG3, LOW);
  duration = pulseIn(ECHO3, HIGH);
  distance = ( (float)(340*duration)/1000)/2; 
  return distance;
}

void motor_A_control(int direction_a, int motor_speed_a) // 모터 A의 방향(direction)과 속도(speed) 제어
{
  if(direction_a == HIGH)
  {
     digitalWrite(IN1, HIGH);           // 모터의 방향 제어
     digitalWrite(IN2, LOW);
     analogWrite(ENA,motor_speed_a);    // 모터의 속도 제어
  }
  else
  {
     digitalWrite(IN1, LOW);
     digitalWrite(IN2, HIGH);
     analogWrite(ENA,motor_speed_a);
  }
}


void motor_B_control(int direction_b, int motor_speed_b) // 모터 B의 방향(direction)과 속도(speed) 제어
{
  if(direction_b == HIGH)
  {
     digitalWrite(IN3, HIGH);           // 모터의 방향 제어
     digitalWrite(IN4, LOW);
     analogWrite(ENB,motor_speed_b);    // 모터의 속도 제어
  }
  else
  {
     digitalWrite(IN3, LOW);
     digitalWrite(IN4, HIGH);
     analogWrite(ENB,motor_speed_b);
  }
}

void check_maze_status(void)
{
   if( (left_sonar >= 0)&&(left_sonar <=200)&&(right_sonar >= 0)&&(right_sonar <=200)&&(front_sonar >= 0)&&(front_sonar <=200) ) 
   {
    maze_status = 4;
    Serial.println("maze_status = 4");
   }
   else if( (left_sonar >= 0)&&(left_sonar <=200)&&(right_sonar >= 0)&&(right_sonar <=200) )
   {
    maze_status = 1;
    Serial.println("maze_status = 1");
   }
    else if((left_sonar >= 0)&&(left_sonar <=200)&&(front_sonar >= 0)&&(front_sonar <=200))
    {
    maze_status = 2;
    Serial.println("maze_status = 2");
    }
    else if( (right_sonar >= 0)&&(right_sonar <=200)&&(front_sonar >= 0)&&(front_sonar <=200) )
    {
    maze_status = 3;
    Serial.println("maze_status = 3");
    }
    else
    {
    maze_status = 0;
    Serial.println("maze_status = 0");
    }
}
    
void loop() 
{

   front_sonar = sonar[Front].ping_cm()*10;    // 전방센서
   left_sonar = sonar[Left].ping_cm()*10;      // 좌측 센서 측정
   right_sonar = sonar[Right].ping_cm()*10;    //
   
   if(front_sonar == 0.0)  front_sonar = MAX_DISTANCE;
   if(left_sonar == 0.0)  left_sonar = MAX_DISTANCE;
   if(right_sonar == 0.0)  right_sonar = MAX_DISTANCE;

   Serial.print("L:");Serial.print(left_sonar); Serial.print("  ");
   Serial.print("F:");Serial.print(front_sonar); Serial.print("  ");
   Serial.print("R:");Serial.println(right_sonar);

   check_maze_status();
   delay(1000);
}

/* Serial.print("Distance1: ");
   Serial.println(front_sonar);
   //Serial.print("Distance2: ");
   //Serial.println( sonar2() );
   //Serial.print("Distance3: ");
   //Serial.println( sonar3() );

  if( (front_sonar > 0) && (front_sonar < 250.0))
  {
    //정지 
    Serial.println("Rotate stop");
    motor_A_control(HIGH,0); 
    motor_B_control(LOW,0);
    delay(500);
    
    // 180도 반회전 시계 방향으러 회전
    Serial.println("Rotate CCW");
    motor_A_control(HIGH,77); //오른쪽으로 전진
    motor_B_control(LOW,77);  //왼쪽으로 후진
    delay (800);  
    //일정한 시간 동안 회전

 Serial.println("Rotate stop");
    motor_A_control(HIGH,0); 
    motor_B_control(LOW,0);
    delay(500);
    
    // 180도 반회전 시계 방향으러 회전
    Serial.println("Rotate CCW");
    motor_A_control(LOW, 200); //오른쪽으로 전진
    motor_B_control(HIGH,75);  //왼쪽으로 후진
    delay (400);

     Serial.println("Rotate stop");
    motor_A_control(HIGH,0); 
    motor_B_control(LOW,0);
    delay(500);
    Serial.println("Go Straight");
  motor_A_control(HIGH,80);
  motor_B_control(HIGH,80);
  delay(500);
    
  }
  else
  {
  //직진
  Serial.println("Go Straight");
  motor_A_control(HIGH,80);
  motor_B_control(HIGH,80);
  }
  delay(500);
}  
*/
