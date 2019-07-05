int i = 0;
int income = 0;

int number[10][4]={
  {0, 0, 0, 0}, //0
  {0, 0, 0, 1}, //1
  {0, 0, 1, 0}, //2
  {0, 0, 1, 1}, //3
  {0, 1, 0, 0}, //4
  {0, 1, 0, 1}, //5
  {0, 1, 1, 0}, //6
  {0, 1, 1, 1}, //7
  {1, 0, 0, 0}, //8
  {1, 0, 0, 1}, //9
};

void setup()
{
  pinMode(2, OUTPUT); 
  pinMode(3, OUTPUT); 
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available()>0)
  {
    int inputNumber = Serial.read()-48; //将ASCII码值转化为十进制
    for(i=0;i<4;i++)
    {
      digitalWrite(5-i, number[inputNumber][i]);
     // digitalWrite(1, HIGH);
      delay(2);
    }
  }
  delay(10);
}
