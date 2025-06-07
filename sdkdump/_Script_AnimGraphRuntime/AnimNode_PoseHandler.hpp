#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\AnimNode_AssetPlayerBase.hpp"
namespace _Script_Engine {
struct PoseAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AnimGraphRuntime {
#pragma pack(push, 1)
struct AnimNode_PoseHandler : public _Script_Engine::AnimNode_AssetPlayerBase {
    private: char pad_60[0x38]; public:
    _Script_Engine::PoseAsset*& get_PoseAsset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
