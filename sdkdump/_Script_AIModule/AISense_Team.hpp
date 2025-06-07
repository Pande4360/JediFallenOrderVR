#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AISense.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AISense_Team : public AISense {
    private: char pad_88[0x10]; public:
    void* get_RegisteredEvents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
