#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsConstrainedJumpDataMapping.hpp"
#include "RsHeroStateModifierDefinition.hpp"
void* _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_JumpVelocities() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_LedgeDisableHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x58);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_ClimbDisableHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsConstrainedJumpDataMapping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsConstrainedJumpDataMapping");
    return result;
}
void* _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_ClimbDisableTimes() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_LedgeDisableTimes() {
    return (void*)((uintptr_t)this + 0xb0);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_JumpDisableHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x158);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_AutoGrabDisableHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x100);
}
void* _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_AutoGrabDisableTimes() {
    return (void*)((uintptr_t)this + 0x108);
}
void* _Script_RsGameTechRT::RsConstrainedJumpDataMapping::get_JumpDisableTimes() {
    return (void*)((uintptr_t)this + 0x160);
}
