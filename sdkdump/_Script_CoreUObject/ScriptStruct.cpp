#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "ScriptStruct.hpp"
#include "Struct.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::ScriptStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.ScriptStruct");
    return result;
}
