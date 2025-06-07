#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "NiagaraScriptDataInterfaceCompileInfo.hpp"
void* _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::get_UserPtrIdx() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
void* _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::get_Type() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::get_RegisteredFunctions() {
    return (void*)((uintptr_t)this + 0x28);
}
void _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::set_bIsPlaceholder(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x48 + 0);
    *(uint8_t*)((uintptr_t)this + 0x48 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::get_RegisteredParameterMapRead() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::get_RegisteredParameterMapWrite() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::get_bIsPlaceholder() {
    return (*(uint8_t*)((uintptr_t)this + 0x48 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_Niagara::NiagaraScriptDataInterfaceCompileInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo");
    return result;
}
