#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDamageFromPhysicsCollisionMassLimits.hpp"
bool _Script_RsGameTechRT::RsDamageFromPhysicsCollisionMassLimits::get_UseMassLimits() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsDamageFromPhysicsCollisionMassLimits::set_UseMassLimits(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsDamageFromPhysicsCollisionMassLimits::get_MinimumMass() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_RsGameTechRT::RsDamageFromPhysicsCollisionMassLimits::get_MaximumMass() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsDamageFromPhysicsCollisionMassLimits::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsDamageFromPhysicsCollisionMassLimits");
    return result;
}
