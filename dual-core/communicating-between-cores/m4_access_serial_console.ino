// based on: https://github.com/hpssjellis/my-examples-for-the-arduino-portentaH7

#ifdef CORE_CM7
  #include "RPC_internal.h"
  
  void setup() {
     bootM4(); 
     Serial.begin(115200);
     RPC1.begin();
  }
  
  void loop() {
     Serial.println("M7: Hello");
     while (RPC1.available()) {
        Serial.write(RPC1.read()); 
     }  
     delay(3000);
  }
#endif              


#ifdef CORE_CM4    
  #include "RPC_internal.h"
 
  #define Serial RPC1  // Create alias
  
  void setup() {
     Serial.begin();   // RPC.begin does not take a baud rate
  }
  
  void loop() {
    Serial.println("M4: Hello"); 
    delay(3000);
  }
#endif            