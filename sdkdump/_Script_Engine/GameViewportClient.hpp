#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ScriptViewportClient.hpp"
namespace _Script_Engine {
struct Console;
}
namespace _Script_Engine {
struct World;
}
namespace _Script_Engine {
struct GameInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameViewportClient : public ScriptViewportClient {
    private: char pad_38[0x2b8]; public:
    _Script_Engine::Console*& get_ViewportConsole();
    void* get_DebugProperties();
    _Script_Engine::World*& get_World();
    _Script_Engine::GameInstance*& get_GameInstance();
    static _Script_CoreUObject::Class* static_class();
    void SSSwapControllers();
    void ShowTitleSafeArea();
    void SetConsoleTarget(int32_t PlayerIndex);
}; // Size: 0x2f0
#pragma pack(pop)
}
