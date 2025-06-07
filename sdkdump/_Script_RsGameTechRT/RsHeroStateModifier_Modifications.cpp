#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsHeroStateModifier_Modifications.hpp"
void* _Script_RsGameTechRT::RsHeroStateModifier_Modifications::get_MotionTweaks() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsHeroStateModifier_Modifications::get_AttributeTags() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsHeroStateModifier_Modifications::get_FlagSets() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_RsGameTechRT::RsHeroStateModifier_Modifications::get_CameraModeName() {
    return (void*)((uintptr_t)this + 0x30);
}
int32_t& _Script_RsGameTechRT::RsHeroStateModifier_Modifications::get_CameraModePriority() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void _Script_RsGameTechRT::RsHeroStateModifier_Modifications::set_bSetCollisionTweaks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsHeroStateModifier_Modifications::get_bSetCollisionTweaks() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsHeroStateModifier_Modifications::get_CollisionTweaks() {
    return (void*)((uintptr_t)this + 0x51);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsHeroStateModifier_Modifications::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsHeroStateModifier_Modifications");
    return result;
}
