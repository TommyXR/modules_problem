# How to reproduce

in an x64 development environment,

```powershell
mkdir build
cd build
cmake ..
MSBuild.exe Global.sln
```

Will generate the following errors:

```
C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.31.31103\include\xtr1common(34,2): error C2
953: 'std::integral_constant': class template has already been defined [D:\Dev\cmake_test\build\B\B.vcxproj]
C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.31.31103\include\xtr1common(21): message :
see declaration of 'std::integral_constant' [D:\Dev\cmake_test\build\B\B.vcxproj]
C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.31.31103\include\xtr1common(37,7): error C2
955: 'std::integral_constant': use of class template requires template argument list [D:\Dev\cmake_test\build\B\B.vcxpr
oj]
C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.31.31103\include\xtr1common(21): message :
see declaration of 'std::integral_constant' [D:\Dev\cmake_test\build\B\B.vcxproj]
C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.31.31103\include\xtr1common(37,1): error C2
386: 'bool_constant': a symbol with this name already exists in the current scope [D:\Dev\cmake_test\build\B\B.vcxproj]
C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.31.31103\include\xtr1common(42,1): warning
C4348: 'std::enable_if': redefinition of default parameter: parameter 2 [D:\Dev\cmake_test\build\B\B.vcxproj]
C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.31.31103\include\xtr1common(43): message :
see declaration of 'std::enable_if' [D:\Dev\cmake_test\build\B\B.vcxproj]
C:\Program Files\Microsoft Visual Studio\2022\Professional\VC\Tools\MSVC\14.31.31103\include\xtr1common(43,20): error C
2953: 'std::enable_if': class template has already been defined [D:\Dev\cmake_test\build\B\B.vcxproj]
```

etc....


when disabling precompiled headers in `B/CMakeLists.txt`, no error occurs and the project compiles correctly.
