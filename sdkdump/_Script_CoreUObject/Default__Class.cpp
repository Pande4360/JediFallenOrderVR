#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Default__Class.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Default__Class::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Default__Class");
    return result;
}
