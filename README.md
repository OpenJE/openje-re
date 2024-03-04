OpenJE-RE
=========

OpenJE is an open source reverse engineered c++ implementation of the Jefferson Engine developed by Interplay Entertainment's Black Isle Studios.

- License: GPLv3 (see LICENSE for more information)

Current Status
--------------

This project is currently in early development. So far only classes with virtual functions have been identified, and some functions that contain debugging print information hinting at there function names and functionality.

Getting Started
---------------

- An IDA database file for the F3.exe is located in the ida directory, along with a header file for ida structure definitions.
    - Plugins that were used with the IDA database:
        - Class Informer: https://github.com/herosi/classinformer-ida8
        - Function String Associate: https://sourceforge.net/projects/idafunctionstringassociate/
        - Mark Reference Counts: https://sourceforge.net/projects/idamarkrefcountplugin/
        - Function API Usage Commenter: https://sourceforge.net/projects/idawhatapisplugin/
    - Guide to using the plugins together: http://www.macromonkey.com/bb/index.php/topic,20.0.html

- Reverse engineered C++ source code is located in the c++ directory, where header/interface files are located in the c++/headers directory, and source/implementation files are locates in the c++/source directory.