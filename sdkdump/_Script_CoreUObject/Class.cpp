#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Struct.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Class::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Class");
    return result;
}
