#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct OrbitOptions {
    private: char pad_0[0x4]; public:
    bool get_bProcessDuringSpawn();
    void set_bProcessDuringSpawn(bool value);
    bool get_bProcessDuringUpdate();
    void set_bProcessDuringUpdate(bool value);
    bool get_bUseEmitterTime();
    void set_bUseEmitterTime(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
