# F3::CDebugToolsInterface

[Return to `F3`](/docs/F3.md)

## C++

- [`CDebugToolsInterface.hpp`](/c++/include/CDebugToolsInterface.hpp)
- [`CDebugToolsInterface.cpp`](/c++/source/CDebugToolsInterface.cpp)

## References

- [`F3::HeapTracker`](/docs/F3/HeapTracker.md)
- [`F3::GUI::Interface`](/docs/F3/GUI/Interface.md)
- [`F3::CEngineInterface`](/docs/F3/CEngineInterface.md)

## Inheritance

```mermaid
graph TD;
    F3::HeapTracker --> F3::GUI::Interface
    F3::GUI::Interface --> F3::CEngineInterface
    F3::CEngineInterface --> F3::CDebugToolsInterface
```

[Return to `F3`](/docs/F3.md)