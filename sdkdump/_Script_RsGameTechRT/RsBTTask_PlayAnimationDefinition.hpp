#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTTask_PlayAnimationBase.hpp"
namespace _Script_RsGameTechRT {
struct RsAIAnimationDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_PlayAnimationDefinition : public RsBTTask_PlayAnimationBase {
    private: char pad_90[0x18]; public:
    _Script_RsGameTechRT::RsAIAnimationDefinition*& get_AnimationDefinition();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
