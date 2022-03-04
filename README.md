# Test-SingletonMemberAccess

## Environment

- Window 10 sdk 10.0.22000  
- Visual Studio 2019  
- ISO c++17  

## Result

- Write to member

```
mov register, [Variable]  
mov [VariableAddress + n(Offset)], register  

ex)  
00007FF6F840371E  mov         eax,dword ptr [_l]  
00007FF6F8403724  mov         dword ptr [CAManager::s_Instance+4h (07FF6F8410184h)],eax  
```

- Read from member

```
mov register, [VariableAddress + n(Offset)]  

ex)  
00007FF6F840364B  mov         eax,dword ptr [CAManager::s_Instance+4h (07FF6F8410184h)]  
```

![2](2.png)
