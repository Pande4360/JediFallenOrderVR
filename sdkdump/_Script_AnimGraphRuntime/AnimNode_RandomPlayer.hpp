#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_RandomPlayer : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x60]; public:
    bool get_bShuffleMode();
    void set_bShuffleMode(bool value);
    void* get_Entries();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
