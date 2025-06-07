#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "CollectionParameterBase.hpp"
#include "CollectionScalarParameter.hpp"
float& _Script_Engine::CollectionScalarParameter::get_DefaultValue() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_Engine::CollectionScalarParameter::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.CollectionScalarParameter");
    return result;
}
