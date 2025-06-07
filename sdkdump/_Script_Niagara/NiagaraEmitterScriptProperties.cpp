#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterScriptProperties.hpp"
#include "NiagaraScript.hpp"
_Script_Niagara::NiagaraScript*& _Script_Niagara::NiagaraEmitterScriptProperties::get_Script() {
    return *(_Script_Niagara::NiagaraScript**)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraEmitterScriptProperties::get_EventReceivers() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraEmitterScriptProperties::get_EventGenerators() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterScriptProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterScriptProperties");
    return result;
}
