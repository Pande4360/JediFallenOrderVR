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
struct AnimNode_UseCachedPose : public AnimNode_Base {
    private: char pad_30[0x18]; public:
    void* get_LinkToCachingNode();
    void* get_CachePoseName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
