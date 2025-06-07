#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithAreaLightActor : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    void* get_LightShape();
    void* get_Dimensions();
    void* get_Color();
    float& get_Intensity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
