#include "..\FUObjectArray.hpp"
#include "DestructibleAdvancedParameters.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ApexDestruction::DestructibleAdvancedParameters::get_ImpactVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ApexDestruction::DestructibleAdvancedParameters::get_DamageCap() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_ApexDestruction::DestructibleAdvancedParameters::get_MaxChunkSpeed() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleAdvancedParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.DestructibleAdvancedParameters");
    return result;
}
float& _Script_ApexDestruction::DestructibleAdvancedParameters::get_FractureImpulseScale() {
    return *(float*)((uintptr_t)this + 0xc);
}
