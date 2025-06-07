#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimSequence;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct RandomPlayerSequenceEntry {
    private: char pad_0[0x58]; public:
    _Script_Engine::AnimSequence*& get_Sequence();
    float& get_ChanceToPlay();
    int32_t& get_MinLoopCount();
    int32_t& get_MaxLoopCount();
    float& get_MinPlayRate();
    float& get_MaxPlayRate();
    void* get_BlendIn();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
