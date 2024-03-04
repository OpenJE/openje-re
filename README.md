OpenJE-RE
=========

OpenJE is an open source reverse engineered c++ implementation of the Jefferson Engine developed by Interplay Entertainment's Black Isle Studios.

* License: GPLv3 (see LICENSE for more information)

Current Status
--------------

This project is currently in early development. So far only classes with virtual functions have been identified, and some functions that contain debugging print information hinting at there function names and functionality.

Getting Started
---------------

* An IDA database file for the F3.exe is located in the ida directory, along with a header file for ida structure definitions.
* Reverse engineered C++ source code is located in the c++ directory, where header/interface files are located in the c++/headers directory, and source/implementation files are locates in the c++/source directory.