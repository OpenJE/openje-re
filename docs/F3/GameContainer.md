# F3::GameContainer

[Return to `F3`](/docs/F3.md)

## C++

- [`GameContainer.hpp`](/c++/include/GameContainer.hpp)
- [`GameContainer.cpp`](/c++/source/GameContainer.cpp)

## References

- [`F3::DynamicObject`](/docs/F3/DynamicObject.md)
- [`F3::Entity`](/docs/F3/Entity.md)
- [`F3::GameEntity`](/docs/F3/GameEntity.md)
- [`F3::GameUsableObject`](/docs/F3/GameUsableObject.md)

## Inheritance

```mermaid
graph TD;
    F3::DynamicObject --> F3::Entity
    F3::Entity --> F3::GameEntity
    F3::GameEntity --> F3::GameUsableObject
    F3::GameUsableObject --> F3::GameContainer
```

[Return to `F3`](/docs/F3.md)