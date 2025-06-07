#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "JsonObjectWrapper.hpp"
void* _Script_JsonUtilities::JsonObjectWrapper::get_JsonString() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_JsonUtilities::JsonObjectWrapper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/JsonUtilities.JsonObjectWrapper");
    return result;
}
