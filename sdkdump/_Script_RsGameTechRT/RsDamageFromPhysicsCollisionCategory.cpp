#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDamageFromPhysicsCollisionCategory.hpp"
void* _Script_RsGameTechRT::RsDamageFromPhysicsCollisionCategory::get_VelocityLimits() {
    return (void*)((uintptr_t)this + 0x14);
}
void* _Script_RsGameTechRT::RsDamageFromPhysicsCollisionCategory::get_CategoryName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsDamageFromPhysicsCollisionCategory::get_MassLimits() {
    return (void*)((uintptr_t)this + 0x8);
}
float& _Script_RsGameTechRT::RsDamageFromPhysicsCollisionCategory::get_HealthDamageOnPhysicsHit() {
    return *(float*)((uintptr_t)this + 0x20);
}
void* _Script_RsGameTechRT::RsDamageFromPhysicsCollisionCategory::get_DamageType() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDamageFromPhysicsCollisionCategory::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDamageFromPhysicsCollisionCategory");
    return result;
}
