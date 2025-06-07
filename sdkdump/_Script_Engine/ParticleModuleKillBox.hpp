#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleKillBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleKillBox : public ParticleModuleKillBase {
    private: char pad_30[0xa8]; public:
    void* get_LowerLeftCorner();
    void* get_UpperRightCorner();
    bool get_bAbsolute();
    void set_bAbsolute(bool value);
    bool get_bKillInside();
    void set_bKillInside(bool value);
    bool get_bAxisAlignedAndFixedSize();
    void set_bAxisAlignedAndFixedSize(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
