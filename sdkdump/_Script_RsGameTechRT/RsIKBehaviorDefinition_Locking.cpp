#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsIKBehaviorDefinition.hpp"
#include "RsIKBehaviorDefinition_Locking.hpp"
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_ForceUnlockBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x48);
}
void _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::set_bUseDebugLockOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x72 + 0);
    *(uint8_t*)((uintptr_t)this + 0x72 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_BlendInDelay() {
    return *(float*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_BlendOutTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_DefaultBlendOption() {
    return (void*)((uintptr_t)this + 0x3c);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_BlendInTime() {
    return *(float*)((uintptr_t)this + 0x34);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_ForceUnlockDistanceThreshold() {
    return *(float*)((uintptr_t)this + 0x40);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsIKBehaviorDefinition_Locking");
    return result;
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_ForceUnlockTime() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_MaxSpeedToAllowAdjusts() {
    return *(float*)((uintptr_t)this + 0x4c);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_AdjustUnlockOffset() {
    return (void*)((uintptr_t)this + 0x50);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_AdjustDistanceThreshold() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_AdjustAfterTime() {
    return *(float*)((uintptr_t)this + 0x60);
}
void _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::set_bDebugDraw(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x71 + 0);
    *(uint8_t*)((uintptr_t)this + 0x71 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_AdjustUnlockMinTime() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_AdjustUnlockMaxTime() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_AdjustBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x6c);
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_AdjustBlendOption() {
    return (void*)((uintptr_t)this + 0x70);
}
bool _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_bDebugDraw() {
    return (*(uint8_t*)((uintptr_t)this + 0x71 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_bUseDebugLockOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x72 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsIKBehaviorDefinition_Locking::get_bDebugLockOffsetCS() {
    return (void*)((uintptr_t)this + 0x74);
}
