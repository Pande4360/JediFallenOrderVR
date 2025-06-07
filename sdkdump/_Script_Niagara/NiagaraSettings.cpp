#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DeveloperSettings.hpp"
#include "NiagaraSettings.hpp"
void* _Script_Niagara::NiagaraSettings::get_AdditionalParameterTypes() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraSettings::get_AdditionalPayloadTypes() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Niagara::NiagaraSettings::get_AdditionalParameterEnums() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Niagara.NiagaraSettings");
    return result;
}
