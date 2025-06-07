#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwGameDestructibleActorSaveGameState_ComponentState {
    private: char pad_0[0x10]; public:
    void* get_m_Name();
    bool get_m_Active();
    void set_m_Active(bool value);
    bool get_m_HiddenInGame();
    void set_m_HiddenInGame(bool value);
    void* get_m_CollisionSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
