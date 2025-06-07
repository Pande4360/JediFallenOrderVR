#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector4.hpp"
#include "..\_Script_RsGameTechRT\RsJumpComponent.hpp"
namespace _Game_Characters_Hero_Logic_BP_Hero {
struct BP_Hero_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Components_Navigation_HC_Jump {
#pragma pack(push, 1)
struct HC_Jump_C : public _Script_RsGameTechRT::RsJumpComponent {
    private: char pad_220[0x30]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& get_BPHero_REF();
    void* get_LVL_ForceFlipped();
    void* get_LVL_Jumped();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveBeginPlay();
    void Jump();
    void zTargetJump();
    void JumpInDirection(bool UseControllerDirection_, _Script_CoreUObject::Vector4 OverrideJumpDirection);
    void DoubleJump();
    void ZTargetDoubleJump();
    void WallJump();
    void NavStateChanged(void* NewState, void* PrevState);
    void ExecuteUbergraph_HC_Jump(int32_t EntryPoint);
    void LVL_Jumped__DelegateSignature();
    void LVL_ForceFlipped__DelegateSignature();
}; // Size: 0x250
#pragma pack(pop)
}
