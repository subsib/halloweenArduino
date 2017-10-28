/* 
 * This stupid program is only a luminar animation in order to decor our street for Halloween.  
 * We have realized 4 stuffs : 
 * 1/2 - two cats
 * 3 - a witcher
 * 4 - a skeleton
 * All have eyes with LEDs.
 */

int i = 0;

const int CAT1 = 2;
const int CAT2 = 5;
const int WITCHER = 6;
const int SKELETON = 7;
const int SKELETON2 = 8;
const int NUMBER_CAT_ROUNDS = 12;
const int CAT_DELAY = 200;
const int NUMBER_ROUND_SKELETON = 4;


void setup()
{
  pinMode(CAT1, OUTPUT);
  pinMode(CAT2, OUTPUT);
  pinMode(WITCHER, OUTPUT);
  pinMode(SKELETON, OUTPUT);
  pinMode(SKELETON2, OUTPUT);
}

void skeleton_high()
{
    digitalWrite(SKELETON, HIGH);  
    digitalWrite(SKELETON2, HIGH);    
}

void skeleton_low()
{
    digitalWrite(SKELETON, LOW);  
    digitalWrite(SKELETON2, LOW);      
}

void cat_high()
{
    digitalWrite(CAT1, HIGH);
    digitalWrite(CAT2, HIGH);  
}

void cat_low()
{
    digitalWrite(CAT1, LOW);
    digitalWrite(CAT2, LOW);
}

void all_high()
{
    cat_high();
    digitalWrite(WITCHER, HIGH);
    skeleton_high(); 
}

void all_low()
{
    cat_low();
    digitalWrite(WITCHER, LOW);
    skeleton_low();    
}

void cat_anim()
{
    cat_high();
    delay(4000);
    for(int count = 0; count < NUMBER_CAT_ROUNDS; count++) {
      cat_low();
      delay(CAT_DELAY);
      cat_high();
      delay(CAT_DELAY);
    }
    cat_low();
}

void witcher_anim()
{
    digitalWrite(WITCHER, HIGH);
    delay(1000);
    digitalWrite(WITCHER, LOW);
    delay(1000);
    for(int count = 0; count < 2; count++) {
    digitalWrite(WITCHER, HIGH);
    delay(300);
    digitalWrite(WITCHER, LOW);
    delay(100);
    }
    delay(1000);
    for(int count = 0; count < 3; count++) {
    digitalWrite(WITCHER, HIGH);
    delay(300);
    digitalWrite(WITCHER, LOW);
    delay(100);
    }
    delay(1000);
    for(int count = 0; count < 4; count++) {
    digitalWrite(WITCHER, HIGH);
    delay(300);
    digitalWrite(WITCHER, LOW);
    delay(100);     
    }
    delay(1000);
}

void skeleton_anim()
{
  for(int count = 0; count < NUMBER_ROUND_SKELETON; count++) {
    skeleton_high();
    delay(1500); 
    skeleton_low();
    delay(500); 
  }
}

void anim_forall()
{
    all_high();
    delay(1000);
    all_low();
    delay(1000);
}

void loop()
{
  for (i = 1; i <= 5; i += 1) {
    anim_forall();
  }
  cat_anim();
  witcher_anim();
  skeleton_anim();
}
