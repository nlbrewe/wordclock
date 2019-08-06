
// function to generate the right "phrase" based on the time
//-----------------------------------------------------------------------------------------------------------------
void displayTime(void) {
//-----------------------------------------------------------------------------------------------------------------
  // get time from the RTC
  

  // serial print current time
  
  Serial.print( year(), DEC);
  Serial.print('/');
  Serial.print( month(), DEC);
  Serial.print('/');
  Serial.print( day(), DEC);
  Serial.print(' ');
  Serial.print( hour(), DEC);
  Serial.print(':');
  Serial.print( minute(), DEC);
  Serial.print(':');
  Serial.print( second(), DEC);
  Serial.println();
  

  // time we display the appropriate  minute() counter
  if ((minute() > 4) && ( minute() < 10)) {
    MFIVE;  //MFIVE is a definition for Topmask |= nnnnnnnnn
  }
  if (( minute() > 9) && ( minute() < 15)) {
    MTEN;
  }
  if (( minute() > 14) && ( minute() < 20)) {
    AQUARTER;
  }
  if (( minute() > 19) && ( minute() < 25)) {
    TWENTY;
  }
  if (( minute() > 24) && ( minute() < 30)) {
    TWENTY;
    MFIVE;
  }
  if (( minute() > 29) && ( minute() < 35)) {
    HALF;
  }
  if (( minute() > 34) && ( minute() < 40)) {
    TWENTY;
    MFIVE;
  }
  if (( minute() > 39) && ( minute() < 45)) {
    TWENTY;
  }
  if (( minute() > 44) && ( minute() < 50)) {
    AQUARTER;
  }
  if (( minute() > 49) && ( minute() < 55)) {
    MTEN;
  }
  if ( minute() > 54) {
    MFIVE;
  }

  if (( minute() < 5))
  {
    switch ( hour()) {
      case 1:
      case 13:
        ONE;
        break;
      case 2:
      case 14:
        TWO;
        break;
      case 3:
      case 15:
        THREE;
        break;
      case 4:
      case 16:
        FOUR;
        break;
      case 5:
      case 17:
        FIVE;
        break;
      case 6:
      case 18:
        SIX;
        break;
      case 7:
      case 19:
        SEVEN;
        break;
      case 8:
      case 20:
        EIGHT;
        break;
      case 9:
      case 21:
        NINE;
        break;
      case 10:
      case 22:
        TEN;
        break;
      case 11:
      case 23:
        ELEVEN;
        break;
      case 0:
      case 12:
        TWELVE;
        break;
    }

  }
  else if (( minute() < 35) && ( minute() > 4))
  {
    PAST;
    //Serial.print(" past ");
    switch ( hour()) {
      case 1:
      case 13:
        ONE;
        break;
      case 2:
      case 14:
        TWO;
        break;
      case 3:
      case 15:
        THREE;
        break;
      case 4:
      case 16:
        FOUR;
        break;
      case 5:
      case 17:
        FIVE;
        break;
      case 6:
      case 18:
        SIX;
        break;
      case 7:
      case 19:
        SEVEN;
        break;
      case 8:
      case 20:
        EIGHT;
        break;
      case 9:
      case 21:
        NINE;
        break;
      case 10:
      case 22:
        TEN;
        break;
      case 11:
      case 23:
        ELEVEN;
        break;
      case 0:
      case 12:
        TWELVE;
        break;
    }
  }
  else
  {
    // if we are greater than 34 minutes past the hour then display
    // the next hour, as we will be displaying a 'to' sign
    TO;
    //Serial.print(" to ");
    switch ( hour()) {
      case 1:
      case 13:
        TWO;
        break;
      case 14:
      case 2:
        THREE;
        break;
      case 15:
      case 3:
        FOUR;
        break;
      case 4:
      case 16:
        FIVE;
        break;
      case 5:
      case 17:
        SIX;
        break;
      case 6:
      case 18:
        SEVEN;
        break;
      case 7:
      case 19:
        EIGHT;
        break;
      case 8:
      case 20:
        NINE;
        break;
      case 9:
      case 21:
        TEN;
        break;
      case 10:
      case 22:
        ELEVEN;
        break;
      case 11:
      case 23:
        TWELVE;
        break;
      case 0:
      case 12:
        ONE;
        break;
    }
  }
  applyMask(); // apply phrase mask to colorshift function
}









