# F3::GameWeapon

[Return to `F3`](/docs/F3.md)

## C++

- [`GameWeapon.hpp`](/c++/include/GameWeapon.hpp)
- [`GameWeapon.cpp`](/c++/source/GameWeapon.cpp)

## References

- [`F3::DynamicObject`](/docs/F3/DynamicObject.md)
- [`F3::Entity`](/docs/F3/Entity.md)
- [`F3::GameEntity`](/docs/F3/GameEntity.md)
- [`F3::GameItem`](/docs/F3/GameItem.md)

## Inheritance

```mermaid
graph TD;
    F3::DynamicObject --> F3::Entity
    F3::Entity --> F3::GameEntity
    F3::GameEntity --> F3::GameItem
    F3::GameItem --> F3::GameWeapon
```

[Return to `F3`](/docs/F3.md)