#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCustomInstance.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimSequencerInstance : public AnimCustomInstance {
    private: char pad_3b0[0x10]; public:
    void* get_AnimAssets();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c0
#pragma pack(pop)
}
