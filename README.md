# float2binary
watch float value as binary using C++  
### axiom
IEEE754   
(sign 1bit)(exponent 8bit)(mentissa 23bit)   
(sign) * 1.(mentissa) * 2^(exponent-127)   
ex1. 01000000001000000000000000000000 = +1.01*2^(128-127) = 2.5(10)   
### terminal
```
2.5
01000000001000000000000000000000
```
