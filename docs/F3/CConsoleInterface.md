# F3::CConsoleInterface

[Return to `F3`](/docs/F3.md)

## C++

- [`CConsoleInterface.hpp`](/c++/include/CConsoleInterface.hpp)
- [`CConsoleInterface.cpp`](/c++/source/CConsoleInterface.cpp)

## References

- [`F3::HeapTracker`](/docs/F3/HeapTracker.md)
- [`F3::GUI::Interface`](/docs/F3/GUI/Interface.md)
- [`F3::CEngineInterface`](/docs/F3/CEngineInterface.md)

## Inheritance

```mermaid
graph TD;
    F3::HeapTracker --> F3::GUI::Interface
    F3::GUI::Interface --> F3::CEngineInterface
    F3::CEngineInterface --> F3::CConsoleInterface
```

[Return to `F3`](/docs/F3.md)