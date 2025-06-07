#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Field.hpp"
#include "Struct.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Struct::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Struct");
    return result;
}
