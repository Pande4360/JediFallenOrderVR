#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Function.hpp"
#include "CachedPropertyPath.hpp"
_Script_CoreUObject::Class* _Script_PropertyPath::CachedPropertyPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/PropertyPath.CachedPropertyPath");
    return result;
}
void* _Script_PropertyPath::CachedPropertyPath::get_Segments() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Function*& _Script_PropertyPath::CachedPropertyPath::get_CachedFunction() {
    return *(_Script_CoreUObject::Function**)((uintptr_t)this + 0x18);
}
