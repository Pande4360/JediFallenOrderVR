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
struct AnimNode_PoseSnapshot : public _Script_Engine::AnimNode_Base {
    private: char pad_30[0x80]; public:
    void* get_Mode();
    void* get_SnapshotName();
    void* get_Snapshot();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
