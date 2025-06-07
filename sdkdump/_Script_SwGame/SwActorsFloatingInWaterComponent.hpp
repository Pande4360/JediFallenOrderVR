#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\ActorComponent.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
struct SwActorsFloatingInWaterDataAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwActorsFloatingInWaterComponent : public _Script_Engine::ActorComponent {
    private: char pad_170[0x48]; public:
    _Script_Engine::Actor*& get_WaterActor();
    _Script_SwGame::SwActorsFloatingInWaterDataAsset*& get_SettingsDataAsset();
    void* get_m_HiResPool();
    void* get_m_LowResPool();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1b8
#pragma pack(pop)
}
