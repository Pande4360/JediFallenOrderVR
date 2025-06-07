#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "VMExternalFunctionBindingInfo.hpp"
void* _Script_Niagara::VMExternalFunctionBindingInfo::get_InputParamLocations() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_Niagara::VMExternalFunctionBindingInfo::get_Name() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Niagara::VMExternalFunctionBindingInfo::get_OwnerName() {
    return (void*)((uintptr_t)this + 0x8);
}
int32_t& _Script_Niagara::VMExternalFunctionBindingInfo::get_NumOutputs() {
    return *(int32_t*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_Niagara::VMExternalFunctionBindingInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Niagara.VMExternalFunctionBindingInfo");
    return result;
}
