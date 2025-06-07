#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsJumpSettings.hpp"
#include "RsPhysicalAnimationProfile.hpp"
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_SlideJumpModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x60);
}
float& _Script_RsGameTechRT::RsJumpSettings::get_PostJumpDisableClimbAutoGrabDuration() {
    return *(float*)((uintptr_t)this + 0x50);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_DoubleJumpData() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_JumpInputActionName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_JumpData() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsJumpSettings::get_JumpDuringGraceWindowImpulseDelay() {
    return *(float*)((uintptr_t)this + 0x4c);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_WallJumpAirModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x78);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_DisableClimbAutoGrabModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x40);
}
float& _Script_RsGameTechRT::RsJumpSettings::get_JumpOverMaxSpeedSlowDownMultiplier() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_SlideJumpData() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_WallJumpData() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_RsGameTechRT::RsJumpSettings::get_WallJumpAngleDegrees() {
    return *(float*)((uintptr_t)this + 0x70);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_WallJumpRotationModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x80);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_WallJumpFallModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x88);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_DoubleJumpZTargetData() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_RsGameTechRT::RsJumpSettings::get_VerticalSpeedAdditiveThreshold() {
    return *(float*)((uintptr_t)this + 0xa0);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_DoubleJumpAdditiveData() {
    return (void*)((uintptr_t)this + 0xa4);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_DoubleJumpModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xb0);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_ConstrainedJumpDataMapping() {
    return (void*)((uintptr_t)this + 0xd0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_DoubleJumpZTargetModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0xb8);
}
void* _Script_RsGameTechRT::RsJumpSettings::get_ConstrainedJumpPadMappings() {
    return (void*)((uintptr_t)this + 0xc0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_ConstrainedJumpTagModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x280);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_ConstrainedJumpMovementModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x288);
}
float& _Script_RsGameTechRT::RsJumpSettings::get_ConstrainedJumpMovementModifierBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x290);
}
float& _Script_RsGameTechRT::RsJumpSettings::get_ConstrainedJumpMovementModifierDuration() {
    return *(float*)((uintptr_t)this + 0x294);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsJumpSettings::get_ConstrainedJumpNoGripDisableGrabModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x298);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsJumpSettings::get_PhysicalAnimationProfileConstrainedJump() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x2a0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsJumpSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsJumpSettings");
    return result;
}
