#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsBTTask_DirectMoveToBlackboardBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTTask_MoveInDirection : public RsBTTask_DirectMoveToBlackboardBase {
    private: char pad_b0[0x40]; public:
    void* get_MoveDirection();
    float& get_MinMoveDistance();
    float& get_MaxMoveDistance();
    void* get_Facing();
    bool get_bSetDestinationBlackboardKey();
    void set_bSetDestinationBlackboardKey(bool value);
    void* get_DestinationBlackboardKey();
    bool get_bAllowFallback();
    void set_bAllowFallback(bool value);
    bool get_bRestrictTo2DMotion();
    void set_bRestrictTo2DMotion(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xf0
#pragma pack(pop)
}
