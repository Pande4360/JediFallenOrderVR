#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraCollisionEventPayload.hpp"
void* _Script_Niagara::NiagaraCollisionEventPayload::get_CollisionPos() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Niagara::NiagaraCollisionEventPayload::get_PhysicalMaterialIndex() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
void* _Script_Niagara::NiagaraCollisionEventPayload::get_CollisionNormal() {
    return (void*)((uintptr_t)this + 0xc);
}
void* _Script_Niagara::NiagaraCollisionEventPayload::get_CollisionVelocity() {
    return (void*)((uintptr_t)this + 0x18);
}
int32_t& _Script_Niagara::NiagaraCollisionEventPayload::get_ParticleIndex() {
    return *(int32_t*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraCollisionEventPayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraCollisionEventPayload");
    return result;
}
