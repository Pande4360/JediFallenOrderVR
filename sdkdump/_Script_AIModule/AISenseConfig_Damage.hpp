#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISenseConfig.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISenseConfig_Damage : public AISenseConfig {
    private: char pad_48[0x8]; public:
    void* get_Implementation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
