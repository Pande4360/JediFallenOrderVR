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
struct AnimNotifyQueue {
    private: char pad_0[0x70]; public:
    void* get_AnimNotifies();
    void* get_UnfilteredMontageAnimNotifies();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
