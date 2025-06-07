#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Timespan.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Timespan::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Timespan");
    return result;
}
