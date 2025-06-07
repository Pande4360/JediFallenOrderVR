#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Default__Struct.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Default__Struct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Struct /Script/CoreUObject.Default__Struct");
    return result;
}
