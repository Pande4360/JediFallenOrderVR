#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEventReceiverProperties.hpp"
void* _Script_Niagara::NiagaraEventReceiverProperties::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraEventReceiverProperties::get_SourceEventGenerator() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraEventReceiverProperties::get_SourceEmitter() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEventReceiverProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEventReceiverProperties");
    return result;
}
