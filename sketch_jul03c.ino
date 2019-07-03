#include <Morse.h>
Morse m(13);
char kb[100];
int i=0,n=0;
void setup() 
{
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available()>0)
    {
    kb[100]=Serial.read();
    n++;
    }
  for(i=0;i<n;i++)
  {
    switch(kb[i])
    {
      case'a':{m.dot();m.dash();break;}
      case'b':{m.dash();m.dot();m.dot();m.dot();break;}
      case'c':{m.dash();m.dot();m.dash();m.dot();break;}
      case'd':{m.dash();m.dot();m.dot();break;}
      case'e':{m.dot();break;}
      case'f':{m.dot();m.dot();m.dash();m.dot();break;}
      case'g':{m.dash();m.dash();m.dot();break;}
      case'h':{m.dot();m.dot();m.dot();m.dot();break;}
      case'i':{m.dot();m.dot();break;}
      case'j':{m.dot();m.dash();m.dash();m.dash();break;}
      case'k':{m.dash();m.dot();m.dash();break;}
      case'l':{m.dot();m.dash();m.dot();m.dot();break;}
      case'm':{m.dash();m.dash();break;}
      case'n':{m.dash();m.dot();break;}
      case'o':{m.dash();m.dash();m.dash();break;}
      case'p':{m.dot();m.dash();m.dash();m.dot();break;}
      case'q':{m.dash();m.dash();m.dot();m.dash();break;}
      case'r':{m.dot();m.dash();m.dot();break;}
      case's':{m.dot();m.dot();m.dot();break;}
      case't':{m.dash();break;}
      case'u':{m.dot();m.dot();m.dash();break;}
      case'v':{m.dot();m.dot();m.dot();m.dash();break;}
      case'w':{m.dot();m.dash();m.dash();break;}
      case'x':{m.dash();m.dot();m.dot();m.dash();break;}
      case'y':{m.dash();m.dot();m.dash();m.dash();break;}
      case'z':{m.dash();m.dash();m.dot();m.dot();break;}
      default:m.w_space();
      }
    }
}
