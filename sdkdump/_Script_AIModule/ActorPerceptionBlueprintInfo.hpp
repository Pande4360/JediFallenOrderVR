#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct ActorPerceptionBlueprintInfo {
    private: char pad_0[0x20]; public:
    _Script_Engine::Actor*& get_Target();
    void* get_LastSensedStimuli();
    bool get_bIsHostile();
    void set_bIsHostile(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
