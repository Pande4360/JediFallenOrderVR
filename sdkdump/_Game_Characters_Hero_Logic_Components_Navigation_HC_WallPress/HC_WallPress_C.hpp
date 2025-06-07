#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsWallPressComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_WallPress {
#pragma pack(push, 1)
struct HC_WallPress_C : public _Script_RsGameTechRT::RsWallPressComponent {
    private: char pad_29a0[0x20]; public:
    void* get_UberGraphFrame();
    float& get_MovementMinimumMagnitude();
    float& get_MovementPadRange();
    bool get_AtEndOfWall();
    void set_AtEndOfWall(bool value);
    float& get_BackJumpPadRange();
    float& get_BackJumpMinimumMagnitude();
    void* get_BufferedMovementDirection();
    void* get_BufferedJumpDirection();
    bool get_BufferedIsTryingToMove();
    void set_BufferedIsTryingToMove(bool value);
    static _Script_CoreUObject::Class* static_class();
    void CanDoJumpAction(void* ActionName, bool& CanJump);
    bool ShouldAttachToActiveSurvey0();
    void CategorizePadInput(bool& IsTryingToMove, void*& MovementDirection, void*& JumpDirection);
    void OnEnterWallPress0();
    void OnExitWallPress0();
    void Wall_Press_Jump();
    void BP_WallPressTick0(float Dt);
    void Force_Release();
    void Release();
    void ReceiveBeginPlay();
    void OnJumpBuffered(void* ActionName, bool IsBufferedRelease);
    void ReceiveEndPlay(void* EndPlayReason);
    void OnJumpUnbuffered(void* ActionName, bool IsBufferedRelease);
    void ExecuteUbergraph_HC_WallPress(int32_t EntryPoint);
}; // Size: 0x29c0
#pragma pack(pop)
}
