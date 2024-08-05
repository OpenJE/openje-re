# F3::CNASInterface

[Return to `F3`](/docs/F3.md)

## C++

- [`CNASInterface.hpp`](/c++/include/CNASInterface.hpp)
- [`CNASInterface.cpp`](/c++/source/CNASInterface.cpp)

## References

- [`F3::HeapTracker`](/docs/F3/HeapTracker.md)
- [`F3::GUI::Interface`](/docs/F3/GUI/Interface.md)
- [`F3::CEngineInterface`](/docs/F3/CEngineInterface.md)

## Inheritance

```mermaid
graph TD;
    F3::HeapTracker --> F3::GUI::Interface
    F3::GUI::Interface --> F3::CEngineInterface
    F3::CEngineInterface --> F3::CNASInterface
```

[Return to `F3`](/docs/F3.md)