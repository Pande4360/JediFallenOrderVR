#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "DynamicClass.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::DynamicClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.DynamicClass");
    return result;
}
