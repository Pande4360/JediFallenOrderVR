#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FallbackStruct.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::FallbackStruct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.FallbackStruct");
    return result;
}
