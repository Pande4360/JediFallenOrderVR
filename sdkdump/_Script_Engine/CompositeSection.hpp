#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimLinkableElement.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CompositeSection : public AnimLinkableElement {
    private: char pad_30[0x30]; public:
    void* get_SectionName();
    float& get_StartTime();
    void* get_NextSectionName();
    void* get_MetaData();
    bool get_bIsRandomized();
    void set_bIsRandomized(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
