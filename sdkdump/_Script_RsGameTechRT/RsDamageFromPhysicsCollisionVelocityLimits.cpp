#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDamageFromPhysicsCollisionVelocityLimits.hpp"
float& _Script_RsGameTechRT::RsDamageFromPhysicsCollisionVelocityLimits::get_MinimumVelocity() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_RsGameTechRT::RsDamageFromPhysicsCollisionVelocityLimits::get_UseVelocityLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsDamageFromPhysicsCollisionVelocityLimits::set_UseVelocityLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsDamageFromPhysicsCollisionVelocityLimits::get_MaximumVelocity() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDamageFromPhysicsCollisionVelocityLimits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDamageFromPhysicsCollisionVelocityLimits");
    return result;
}
