OpenJE-RE
=========

Current State
-------------

    - Structures and Classes with virtual methods have been identified.
    - Functions with name and functionality information through debugging print statements have been identified.
    - IDA Structures for all known structures and classes have been defined:
        - VTable and member definitions are still in progress.

Goals
-----

    1. Define all IDA structures for all known structures and classes:
        - Should make understanding the decompiled code much easier to understand.
    2. Reconstruct all structures, classes, and functions in C++:
        - Should allow the engine to be run to some extent, and will give more insight into what non code aspects of the engine are immediately necessary to reverse engineer, with non necessary aspects of the engine being reverse engineered after.