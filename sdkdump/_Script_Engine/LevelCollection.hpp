#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct GameStateBase;
}
namespace _Script_Engine {
struct NetDriver;
}
namespace _Script_Engine {
struct Level;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelCollection {
    private: char pad_0[0x78]; public:
    _Script_Engine::GameStateBase*& get_GameState();
    _Script_Engine::NetDriver*& get_NetDriver();
    _Script_Engine::Level*& get_PersistentLevel();
    void* get_Levels();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
