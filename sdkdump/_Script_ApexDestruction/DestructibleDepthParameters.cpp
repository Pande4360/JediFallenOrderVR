#include "..\FUObjectArray.hpp"
#include "DestructibleDepthParameters.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ApexDestruction::DestructibleDepthParameters::get_ImpactDamageOverride() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleDepthParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.DestructibleDepthParameters");
    return result;
}
