# F3::GameCSSkillMenuInterface

[Return to `F3`](/docs/F3.md)

## C++

- [`GameCSSkillMenuInterface.hpp`](/c++/include/GameCSSkillMenuInterface.hpp)
- [`GameCSSkillMenuInterface.cpp`](/c++/source/GameCSSkillMenuInterface.cpp)

## References

- [`F3::GUI::HeapTracker`](/docs/F3/GUI/HeapTracker.md)
- [`F3::GUI::Interface`](/docs/F3/GUI/Interface.md)
- [`F3::CEngineInterface`](/docs/F3/CEngineInterface.md)
- [`F3::CSMenuInterface`](/docs/F3/CSMenuInterface.md)
- [`F3::CGameInterface`](/docs/F3/CGameInterface.md)

## Inheritance

```mermaid
graph TD;
    F3::GUI::HeapTracker --> F3::GUI::Interface
    F3::GUI::Interface --> F3::CEngineInterface
    F3::CEngineInterface --> F3::CSMenuInterface
    F3::CEngineInterface --> F3::CGameInterface
    F3::CSMenuInterface --> F3::GameCSSkillMenuInterface
    F3::CGameInterface --> F3::GameCSSkillMenuInterface
```

[Return to `F3`](/docs/F3.md)