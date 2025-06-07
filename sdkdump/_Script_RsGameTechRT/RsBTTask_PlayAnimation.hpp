#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTTask_PlayAnimationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_PlayAnimation : public RsBTTask_PlayAnimationBase {
    private: char pad_90[0x48]; public:
    void* get_AnimData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd8
#pragma pack(pop)
}
