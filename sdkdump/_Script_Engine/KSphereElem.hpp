#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "KShapeElem.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KSphereElem : public KShapeElem {
    private: char pad_38[0x10]; public:
    void* get_Center();
    float& get_Radius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
