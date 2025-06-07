#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "RsMaterialParameterLocalCollection.hpp"
void* _Script_Engine::RsMaterialParameterLocalCollection::get_StateId() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::RsMaterialParameterLocalCollection::get_VectorParameters() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_Engine::RsMaterialParameterLocalCollection::get_ScalarParameters() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::RsMaterialParameterLocalCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.RsMaterialParameterLocalCollection");
    return result;
}
