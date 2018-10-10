/* 
 * This stupid program is only a light animation in order to decor our street for Halloween.  
 * We have realized 4 stuffs : 
 * 1/2 - two cats
 * 3 - a ghost, with two eyes
 * 4 - a skeleton
 * All have eyes with LEDs.
 */

int i = 0;

const int CAT1 = 2;
const int CAT2 = 5;
const int GHOST_1 = 6;
const int GHOST_2 = 7;
const int SKELETON = 8;
const int NUMBER_CAT_ROUNDS = 12;
const int CAT_DELAY = 200;
const int NUMBER_ROUND_SKELETON = 4;


void setup()
{
  pinMode(CAT1, OUTPUT);
  pinMode(CAT2, OUTPUT);
  pinMode(GHOST_1, OUTPUT);
  pinMode(GHOST_2, OUTPUT);
  pinMode(SKELETON, OUTPUT);
}

void skeleton_high()
{
    digitalWrite(SKELETON, HIGH);  
}

void skeleton_low()
{
    digitalWrite(SKELETON, LOW);  
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

void ghost_high()
{
    digitalWrite(GHOST_1, HIGH);
    digitalWrite(GHOST_2, HIGH);
}

void ghost_low()
{
    digitalWrite(GHOST_1, LOW);
    digitalWrite(GHOST_2, LOW);
}

void all_high()
{
    cat_high();
    ghost_high();
    skeleton_high(); 
}

void all_low()
{
    cat_low();
    ghost_low();
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

void ghost_anim()
{
    ghost_high();
    delay(1000);
    ghost_low();
    delay(1000);
    for(int count = 0; count < 2; count++) {
    ghost_high();
    delay(300);
    ghost_low();
    delay(100);
    }
    delay(1000);
    for(int count = 0; count < 3; count++) {
    ghost_high();
    delay(300);
    ghost_low();
    delay(100);
    }
    delay(1000);
    for(int count = 0; count < 4; count++) {
    ghost_high();
    delay(300);
    ghost_low();
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
  ghost_anim();
  skeleton_anim();
}
