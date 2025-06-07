#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Enum.hpp"
#include "Field.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Enum::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Enum");
    return result;
}
