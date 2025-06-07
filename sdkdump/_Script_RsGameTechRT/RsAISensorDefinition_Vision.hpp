#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAISensorDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAISensorDefinition_Vision : public RsAISensorDefinition {
    private: char pad_38[0xd0]; public:
    void* get_AmbientSettings();
    void* get_AlertSettings();
    void* get_AggroSettings();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
