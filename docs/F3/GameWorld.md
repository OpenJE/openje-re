# F3::GameWorld

[Return to `F3`](/docs/F3.md)

## C++

- [`GameWorld.hpp`](/c++/include/GameWorld.hpp)
- [`GameWorld.cpp`](/c++/source/GameWorld.cpp)

## References

- [`F3::IWorld`](/docs/F3/IWorld.md)
- [`F3::IComponent`](/docs/F3/IComponent.md)
- [`F3::IWorldClient`](/docs/F3/IWorldClient.md)
- [`F3::IWorldServer`](/docs/F3/IWorldServer.md)
- [`F3::World`](/docs/F3/World.md)

## Inheritance

```mermaid
graph TD;
    F3::IWorld --> F3::IWorldClient
    F3::IWorld --> F3::IWorldServer
    F3::IComponent --> F3::World
    F3::IWorldClient --> F3::World
    F3::IWorldServer --> F3::World
    F3::World --> F3::GameWorld
```

[Return to `F3`](/docs/F3.md)