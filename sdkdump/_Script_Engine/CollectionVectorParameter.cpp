#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollectionParameterBase.hpp"
#include "CollectionVectorParameter.hpp"
void* _Script_Engine::CollectionVectorParameter::get_DefaultValue() {
    return (void*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::CollectionVectorParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollectionVectorParameter");
    return result;
}
