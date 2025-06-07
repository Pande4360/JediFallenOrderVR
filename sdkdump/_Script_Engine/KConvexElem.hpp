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
struct KConvexElem : public KShapeElem {
    private: char pad_38[0x78]; public:
    void* get_VertexData();
    void* get_ElemBox();
    void* get_Transform();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
