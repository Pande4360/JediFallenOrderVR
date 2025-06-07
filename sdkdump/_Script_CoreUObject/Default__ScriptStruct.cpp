#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Default__ScriptStruct.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Default__ScriptStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Default__ScriptStruct");
    return result;
}
