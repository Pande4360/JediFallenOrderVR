#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_RsGameTechRT {
struct RsDirectionalAnimData;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsDeathDefinitionData {
    private: char pad_0[0x10]; public:
    _Script_RsGameTechRT::RsDirectionalAnimData*& get_AnimType();
    bool get_bRotateCharacter();
    void set_bRotateCharacter(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
