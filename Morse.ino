#include <Morse.h>

Morse morse(13);

char MORSE[27][4] = {   //摩尔斯表供查询
  {'-', '-', '-', '*'}, //O
  {'.', '-', '-', '.'}, //P
  {'-', '-', '.', '-'}, //Q
  {'.', '-', '.', '*'}, //R
  {'.', '.', '.', '*'}, //S
  {'-', '*', '*', '*'}, //T
  {'.', '.', '-', '*'}, //U
  {'.', '.', '.', '-'}, //V
  {'.', '-', '-', '*'}, //W
  {'-', '.', '.', '-'}, //X
  {'-', '.', '-', '-'}, //Y
  {'-', '-', '.', '.'}, //Z
  {'*', '*', '*', '*'}, //空格
  {'.', '-', '*', '*'}, //A
  {'-', '.', '.', '.'}, //B
  {'-', '.', '-', '.'}, //C
  {'-', '.', '.', '*'}, //D
  {'.', '*', '*', '*'}, //E
  {'.', '.', '-', '.'}, //F
  {'-', '-', '.', '*'}, //G
  {'.', '.', '.', '.'}, //H
  {'.', '.', '*', '*'}, //I
  {'.', '-', '-', '-'}, //J
  {'-', '.', '-', '*'}, //K
  {'.', '-', '.', '.'}, //L
  {'-', '-', '*', '*'}, //M
  {'-', '.', '*', '*'}, //N
};

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  String str = ""; 
  String morse_s = "";  
  int i, t , temp = 0;
  int n = 0; 
  while (Serial.available() > 0)
  {
    temp = 1;  
    str += char(Serial.read());  
    delay(2); 
    n++;
  }

  if (temp)
  {
    for (i = 0; i < n; i++)
    {
      if (str[i] >= 97 && str[i] <= 122)
      {
        for (t = 0; t < 4; t++)
        {
          morse_s += char(MORSE[int(str[i] - 97)][t]);
        }
      }
      morse_s += ' ';
    }
    Serial.println(morse_s); 
    for (i = 0; morse_s[i] != '\0' ; i++)
    {
      if (morse_s[i] == '.')morse.dot();
      else if (morse_s[i] == '-')morse.dash();
      else if (morse_s[i] == ' ')morse.w_space();
      if (morse_s[i] != ' ' && str[i] != '*')morse.c_space();
    }
    Serial.println("发送完毕。");
    delay(2);
  }
}
