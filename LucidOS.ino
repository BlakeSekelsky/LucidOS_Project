/*
Lucid OS - Developed by Blake Sekelsky

//Nightly Builds At:
GitHub - https://github.com/TheCodingLucid/LucidOS
//Video Updates At:
Youtube - http://www.youtube.com/user/LucidSoftwareStudios
//Blog Posts At:
Twitter - https://twitter.com/LucidOS_Project
*/ 

#include <LucidLogo.h>
#include <fontALL.h>
#include <TVout.h>
#include <avr/pgmspace.h>
#include <arduino.h>

  TVout TV;
  void setup();
  void loop();
  void program();
  
  //Setup TVout to display at (126, 96) 
  void setup()  
  {
    TV.begin(NTSC, 126, 96);
    TV.select_font(font4x6);
    TV.clear_screen();
  }
  //Draws the logo and splash screen
  void loop() 
  { 
    TV.bitmap(-20, 5, logo);
  }
  void program()
  {}
