#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct AnimState_WallPress {
    private: char pad_0[0x10]; public:
    void* get_CurrentState();
    bool get_bIsSidling();
    void set_bIsSidling(bool value);
    bool get_bIsWallJumping();
    void set_bIsWallJumping(bool value);
    void* get_MovementDirection();
    bool get_bCanReach();
    void set_bCanReach(bool value);
    void* get_ReachDirection();
    float& get_MovementProgressionDt();
    float& get_InPlaceJumpHeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
