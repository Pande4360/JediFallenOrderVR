#include "..\FUObjectArray.hpp"
#include "DestructibleDebrisParameters.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_ApexDestruction::DestructibleDebrisParameters::get_DebrisLifetimeMin() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_ApexDestruction::DestructibleDebrisParameters::get_DebrisLifetimeMax() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_ApexDestruction::DestructibleDebrisParameters::get_DebrisMaxSeparationMin() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_ApexDestruction::DestructibleDebrisParameters::get_DebrisMaxSeparationMax() {
    return *(float*)((uintptr_t)this + 0xc);
}
void* _Script_ApexDestruction::DestructibleDebrisParameters::get_ValidBounds() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleDebrisParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.DestructibleDebrisParameters");
    return result;
}
