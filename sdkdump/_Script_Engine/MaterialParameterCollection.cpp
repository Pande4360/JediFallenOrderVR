#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "MaterialParameterCollection.hpp"
_Script_CoreUObject::Class* _Script_Engine::MaterialParameterCollection::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.MaterialParameterCollection");
    return result;
}
void* _Script_Engine::MaterialParameterCollection::get_StateId() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_Engine::MaterialParameterCollection::get_ScalarParameters() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::MaterialParameterCollection::get_VectorParameters() {
    return (void*)((uintptr_t)this + 0x48);
}
