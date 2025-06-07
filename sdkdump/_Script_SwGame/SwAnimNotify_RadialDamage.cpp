#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimNotify.hpp"
#include "SwAnimNotify_RadialDamage.hpp"
float& _Script_SwGame::SwAnimNotify_RadialDamage::get_DamageOuterRadius() {
    return *(float*)((uintptr_t)this + 0x90);
}
void* _Script_SwGame::SwAnimNotify_RadialDamage::get_HitEvent() {
    return (void*)((uintptr_t)this + 0x38);
}
float& _Script_SwGame::SwAnimNotify_RadialDamage::get_BaseDamage() {
    return *(float*)((uintptr_t)this + 0x78);
}
float& _Script_SwGame::SwAnimNotify_RadialDamage::get_MinimumDamage() {
    return *(float*)((uintptr_t)this + 0x7c);
}
_Script_CoreUObject::Class* _Script_SwGame::SwAnimNotify_RadialDamage::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAnimNotify_RadialDamage");
    return result;
}
void* _Script_SwGame::SwAnimNotify_RadialDamage::get_Offset() {
    return (void*)((uintptr_t)this + 0x80);
}
float& _Script_SwGame::SwAnimNotify_RadialDamage::get_DamageInnerRadius() {
    return *(float*)((uintptr_t)this + 0x8c);
}
