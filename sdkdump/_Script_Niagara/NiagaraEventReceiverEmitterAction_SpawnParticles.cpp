#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEventReceiverEmitterAction.hpp"
#include "NiagaraEventReceiverEmitterAction_SpawnParticles.hpp"
void* _Script_Niagara::NiagaraEventReceiverEmitterAction_SpawnParticles::get_NumParticles() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEventReceiverEmitterAction_SpawnParticles::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
    return result;
}
