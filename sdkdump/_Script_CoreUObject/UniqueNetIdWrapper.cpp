#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "UniqueNetIdWrapper.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::UniqueNetIdWrapper::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.UniqueNetIdWrapper");
    return result;
}
