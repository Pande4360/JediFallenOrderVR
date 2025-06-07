#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "DateTime.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::DateTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.DateTime");
    return result;
}
