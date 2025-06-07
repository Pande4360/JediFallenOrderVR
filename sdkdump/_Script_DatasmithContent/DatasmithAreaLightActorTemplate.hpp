#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DatasmithObjectTemplate.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DatasmithContent {
#pragma pack(push, 1)
struct DatasmithAreaLightActorTemplate : public DatasmithObjectTemplate {
    private: char pad_28[0x28]; public:
    void* get_LightShape();
    void* get_Dimensions();
    void* get_Color();
    float& get_Intensity();
    bool get_bHidden();
    void set_bHidden(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
