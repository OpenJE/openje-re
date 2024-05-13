# F3::CDebugInterface

[Return to `F3`](/docs/F3.md)

## C++

- [`CDebugInterface.hpp`](/c++/include/CDebugInterface.hpp)
- [`CDebugInterface.cpp`](/c++/source/CDebugInterface.cpp)

## References

- [`F3::GUI::HeapTracker`](/docs/F3/GUI/HeapTracker.md)
- [`F3::GUI::Interface`](/docs/F3/GUI/Interface.md)
- [`F3::CEngineInterface`](/docs/F3/CEngineInterface.md)

## Inheritance

```mermaid
graph TD;
    F3::GUI::HeapTracker --> F3::GUI::Interface
    F3::GUI::Interface --> F3::CEngineInterface
    F3::CEngineInterface --> F3::CDebugInterface
```

[Return to `F3`](/docs/F3.md)