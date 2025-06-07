#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "InterpTrackInst.hpp"
namespace _Script_Engine {
struct AnimInstance;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct InterpTrackInstFloatAnimBPParam : public InterpTrackInst {
    private: char pad_28[0x18]; public:
    _Script_Engine::AnimInstance*& get_AnimScriptInstance();
    float& get_ResetFloat();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
