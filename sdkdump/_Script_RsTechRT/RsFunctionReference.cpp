#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Function.hpp"
#include "RsFunctionReference.hpp"
void* _Script_RsTechRT::RsFunctionReference::get_Class() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Function*& _Script_RsTechRT::RsFunctionReference::get_FunctionSignature() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Function*& _Script_RsTechRT::RsFunctionReference::get_FunctionWithReturnAsRefSignature() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x10);
}
void* _Script_RsTechRT::RsFunctionReference::get_FunctionName() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_RsTechRT::RsFunctionReference::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsTechRT.RsFunctionReference");
    return result;
}
void* _Script_RsTechRT::RsFunctionReference::get_FunctionGuid() {
    return (void*)((uintptr_t)this + 0x20);
}
