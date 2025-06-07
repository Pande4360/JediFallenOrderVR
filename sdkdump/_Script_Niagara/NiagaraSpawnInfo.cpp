#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraSpawnInfo.hpp"
float& _Script_Niagara::NiagaraSpawnInfo::get_IntervalDt() {
    return *(float*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Niagara::NiagaraSpawnInfo::get_Count() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Niagara::NiagaraSpawnInfo::get_SpawnGroup() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
float& _Script_Niagara::NiagaraSpawnInfo::get_InterpStartDt() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSpawnInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraSpawnInfo");
    return result;
}
