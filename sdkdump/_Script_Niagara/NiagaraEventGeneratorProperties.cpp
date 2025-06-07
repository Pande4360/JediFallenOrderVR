#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraEventGeneratorProperties.hpp"
int32_t& _Script_Niagara::NiagaraEventGeneratorProperties::get_MaxEventsPerFrame() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::NiagaraEventGeneratorProperties::get_SetProps() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraEventGeneratorProperties::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraEventGeneratorProperties");
    return result;
}
