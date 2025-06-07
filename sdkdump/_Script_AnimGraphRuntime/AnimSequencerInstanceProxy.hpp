#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimInstanceProxy.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimSequencerInstanceProxy : public _Script_Engine::AnimInstanceProxy {
    private: char pad_5e0[0x220]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x800
#pragma pack(pop)
}
