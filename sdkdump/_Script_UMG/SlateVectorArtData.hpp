#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Engine {
struct MaterialInterface;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct SlateVectorArtData : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_VertexData();
    void* get_IndexData();
    _Script_Engine::MaterialInterface*& get_Material();
    void* get_ExtentMin();
    void* get_ExtentMax();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
