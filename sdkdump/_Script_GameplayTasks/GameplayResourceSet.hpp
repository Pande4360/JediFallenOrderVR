#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_GameplayTasks {
#pragma pack(push, 1)
struct GameplayResourceSet {
    private: char pad_0[0x2]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2
#pragma pack(pop)
}
