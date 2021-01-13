# Image-Rotation
Image Rotation in C++ using openCV

•	Tools Required - 
o	VS Code (Visual Studio Code)
o	C/C++ Compiler and Debugger
o	OpenCV package

•	Configure Procedures
o	Install VS Code (Visual Studio Code)
o	Install VS Code C/C++ extensions
o	Install C/C++ Compiler and Debugger
o	Download pre-built OpenCV package
o	Add the Compiler Path and Pre-built OpenCV Packages to Path Variable
o	Configure the .vscode files of your project.
-	create a new project . Then copy and paste the task.json , launch.json , and c_cpp_properties.json .  
o	Create Code, Compile It, and Run It
-	for building and running the project, you can press Ctrl + Shift +B  to build and type the executable name to run in terminal

•	Description
This is a C++ program to rotate the input file(image) by the use of wrafAffine funtion which is inbuilt in the opencv library. This method accepts the following parameters −
src − A Mat object representing the source (input image) for this operation.
dst − A Mat object representing the destination (output image) for this operation.
rotationMatrix − A Mat object representing the rotation matrix.
size − A variable of the type integer representing the size of the output image.
