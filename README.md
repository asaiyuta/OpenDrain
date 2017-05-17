# OpenDrain
teensy32,35,36 pio openDrainSetter

Improving now...

```cpp:example 
    #define PIO_A_TEENSY32
 
    FakePortX8<5> fakaPort; 
    fakaPort.init(0,1,2,3,4); 
    fakePort = 0b00010101;
    //fakePortXLib
   
    OpenDrain::setOpenDrain(0,1,2); // 0,1,2 is OpenDrain;
```
