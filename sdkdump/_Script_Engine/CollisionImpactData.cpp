#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollisionImpactData.hpp"
void* _Script_Engine::CollisionImpactData::get_ContactInfos() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::CollisionImpactData::get_TotalNormalImpulse() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::CollisionImpactData::get_TotalFrictionImpulse() {
    return (void*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_Engine::CollisionImpactData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollisionImpactData");
    return result;
}
