#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "SoftClassPath.hpp"
#include "SoftObjectPath.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::SoftClassPath::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.SoftClassPath");
    return result;
}
