#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct DecalComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PrimitiveMaterialRef {
    private: char pad_0[0x18]; public:
    _Script_Engine::PrimitiveComponent*& get_Primitive();
    _Script_Engine::DecalComponent*& get_Decal();
    int32_t& get_ElementIndex();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
