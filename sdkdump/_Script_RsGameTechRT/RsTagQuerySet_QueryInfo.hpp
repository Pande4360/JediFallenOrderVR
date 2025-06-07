#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct BoolProperty;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsTagQuerySet_QueryInfo {
    private: char pad_0[0x58]; public:
    void* get_ResultName();
    _Script_CoreUObject::BoolProperty*& get_ResultProperty();
    void* get_Query();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
