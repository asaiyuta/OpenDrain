# OpenDrain
teensy32,35,36 pio openDrainSetter
Please do 35 and 36 adapt the internal inclusion appropriately.
Improving now...

```cpp:example 
 
    FakePortX8<5> fakaPort; 
    fakaPort.init(0,1,2,3,4); 
    fakePort = 0b00010101;
    //fakePortXLib
   
    OpenDrain::setOpenDrain(0,1,2); // 0,1,2 is OpenDrain;
```
