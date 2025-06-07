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
struct SwSimpleDestructible_ReactionOnForcePullParameters {
    private: char pad_0[0x20]; public:
    bool get_DestroyPhaseOnForcePull();
    void set_DestroyPhaseOnForcePull(bool value);
    void* get_FreezePhysics();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
