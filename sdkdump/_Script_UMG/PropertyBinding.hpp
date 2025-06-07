#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct PropertyBinding : public _Script_CoreUObject::Object {
    private: char pad_28[0x38]; public:
    void* get_SourceObject();
    void* get_SourcePath();
    void* get_DestinationProperty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
