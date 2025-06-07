#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct GameViewportClient;
}
namespace _Script_Engine {
struct GameInstance;
}
namespace _Script_Engine {
struct PendingNetGame;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct WorldContext {
    private: char pad_0[0x68]; public:
    void* get_ObjectReferencers();
    _Script_Engine::GameViewportClient*& get_GameViewport();
    _Script_Engine::GameInstance*& get_OwningGameInstance();
    void* get_ActiveNetDrivers();
    _Script_Engine::PendingNetGame*& get_PendingNetGame();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
