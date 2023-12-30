CMakeLists.txt in external directory allows us to fetch needed libraries into its directory.<br>
CMakeLists.txt in root folder allows us to link the program against these libraries and create an install folder for the generated binary file (and if needed shared libraries are included there as well).<br>
<br>
USAGE:<br>
1. Clone the repository: git clone --recursive https://github.com/iomko/SurfaceEditorCmakeTest <br>
2. use "mkdir build" on the directory where we cloned the project <br>
3. use "cd build" <br>
4. use "cmake <-DCMAKE_C_COMPILER=COMPILER_TYPE> <-DCMAKE_CXX_COMPILER=COMPILER_TYPE> <-G "GENERATOR_TYPE"> <-DBUILD_SHARED_LIBS=OFF\ON> <-DCMAKE_BUILD_TYPE=Debug\Release> .." <br>
5. use "cmake --build ." <br>
6. use "cmake --install ." <br>
<br>
After all these steps you should have created install/bin directory in the root folder of the project, here are the binaries and additionaly shared libraries necessary to run the application <br>
   
