#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "Actor.hpp"
#include "BillboardComponent.hpp"
#include "CapsuleComponent.hpp"
#include "NavigationObjectBase.hpp"
_Script_Engine::CapsuleComponent*& _Script_Engine::NavigationObjectBase::get_CapsuleComponent() {
    return *(_Script_Engine::CapsuleComponent**)((uintptr_t)this + 0x368);
}
_Script_Engine::BillboardComponent*& _Script_Engine::NavigationObjectBase::get_GoodSprite() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x370);
}
_Script_Engine::BillboardComponent*& _Script_Engine::NavigationObjectBase::get_BadSprite() {
    return *(_Script_Engine::BillboardComponent**)((uintptr_t)this + 0x378);
}
bool _Script_Engine::NavigationObjectBase::get_bIsPIEPlayerStart() {
    return (*(uint8_t*)((uintptr_t)this + 0x380 + 0)) & 1 != 0;
}
void _Script_Engine::NavigationObjectBase::set_bIsPIEPlayerStart(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x380 + 0);
    *(uint8_t*)((uintptr_t)this + 0x380 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::NavigationObjectBase::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.NavigationObjectBase");
    return result;
}
