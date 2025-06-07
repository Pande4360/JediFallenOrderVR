#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DataAsset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsFrameOfReference : public DataAsset {
    private: char pad_30[0x38]; public:
    void* get_Parm();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x68
#pragma pack(pop)
}
