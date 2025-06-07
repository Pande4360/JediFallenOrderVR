#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEmitterSpawnAttributes.hpp"
void* _Script_Niagara::NiagaraEmitterSpawnAttributes::get_SpawnAttributes() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEmitterSpawnAttributes::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEmitterSpawnAttributes");
    return result;
}
