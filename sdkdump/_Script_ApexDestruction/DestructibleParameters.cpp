#include "..\FUObjectArray.hpp"
#include "DestructibleParameters.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_ApexDestruction::DestructibleParameters::get_DamageParameters() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_ApexDestruction::DestructibleParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/ApexDestruction.DestructibleParameters");
    return result;
}
void* _Script_ApexDestruction::DestructibleParameters::get_DebrisParameters() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_ApexDestruction::DestructibleParameters::get_DepthParameters() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_ApexDestruction::DestructibleParameters::get_AdvancedParameters() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_ApexDestruction::DestructibleParameters::get_SpecialHierarchyDepths() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_ApexDestruction::DestructibleParameters::get_Flags() {
    return (void*)((uintptr_t)this + 0x80);
}
