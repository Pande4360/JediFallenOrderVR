#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DelegateRuntimeBinding.hpp"
void* _Script_UMG::DelegateRuntimeBinding::get_ObjectName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_UMG::DelegateRuntimeBinding::get_PropertyName() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_UMG::DelegateRuntimeBinding::get_FunctionName() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_UMG::DelegateRuntimeBinding::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/UMG.DelegateRuntimeBinding");
    return result;
}
void* _Script_UMG::DelegateRuntimeBinding::get_SourcePath() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_UMG::DelegateRuntimeBinding::get_Kind() {
    return (void*)((uintptr_t)this + 0x48);
}
