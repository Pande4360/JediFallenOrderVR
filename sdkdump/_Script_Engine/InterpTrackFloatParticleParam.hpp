#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackFloatBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackFloatParticleParam : public InterpTrackFloatBase {
    private: char pad_90[0x8]; public:
    void* get_ParamName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
