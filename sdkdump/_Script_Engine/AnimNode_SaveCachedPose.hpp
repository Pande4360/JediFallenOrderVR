#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimNode_Base.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct AnimNode_SaveCachedPose : public AnimNode_Base {
    private: char pad_30[0xe8]; public:
    void* get_Pose();
    void* get_CachePoseName();
    float& get_GlobalWeight();
    bool get_RsSyncUpdate();
    void set_RsSyncUpdate(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
