# F3::CDebugInterface

[Return to `F3`](/docs/F3.md)

## C++

- [`CDebugInterface.hpp`](/c++/include/CDebugInterface.hpp)
- [`CDebugInterface.cpp`](/c++/source/CDebugInterface.cpp)

## References

- [`F3::HeapTracker`](/docs/F3/HeapTracker.md)
- [`F3::GUI::Interface`](/docs/F3/GUI/Interface.md)
- [`F3::CEngineInterface`](/docs/F3/CEngineInterface.md)

## Inheritance

```mermaid
graph TD;
    F3::HeapTracker --> F3::GUI::Interface
    F3::GUI::Interface --> F3::CEngineInterface
    F3::CEngineInterface --> F3::CDebugInterface
```

[Return to `F3`](/docs/F3.md)