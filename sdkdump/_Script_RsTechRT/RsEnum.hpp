#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
struct RsBitfield;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsEnum : public _Script_CoreUObject::Object {
    private: char pad_28[0x610]; public:
    static _Script_CoreUObject::Class* static_class();
    _Script_RsTechRT::RsEnum* MakeRsEnum(void* enumParmName);
    bool MakeBitfield(_Script_RsTechRT::RsBitfield& Bitfield, void*& namedBits);
    void DumpEnum(void*& ToString);
    void DumpBitfield(void*& ToString, _Script_RsTechRT::RsBitfield& Bitfield);
}; // Size: 0x638
#pragma pack(pop)
}
