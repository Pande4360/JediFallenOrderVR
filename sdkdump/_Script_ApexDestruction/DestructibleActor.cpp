#include "..\FUObjectArray.hpp"
#include "DestructibleActor.hpp"
#include "DestructibleComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleActor::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ApexDestruction.DestructibleActor");
    return result;
}
void _Script_ApexDestruction::DestructibleActor::set_bAffectNavigation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_ApexDestruction::DestructibleComponent*& _Script_ApexDestruction::DestructibleActor::get_DestructibleComponent() {
    return *(_Script_ApexDestruction::DestructibleComponent**)((uintptr_t)this + 0x360);
}
bool _Script_ApexDestruction::DestructibleActor::get_bAffectNavigation() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void* _Script_ApexDestruction::DestructibleActor::get_OnActorFracture() {
    return (void*)((uintptr_t)this + 0x370);
}
