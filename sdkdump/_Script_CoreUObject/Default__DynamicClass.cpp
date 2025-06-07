#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Default__DynamicClass.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Default__DynamicClass::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"DynamicClass /Script/CoreUObject.Default__DynamicClass");
    return result;
}
