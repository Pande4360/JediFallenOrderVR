#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Interface.hpp"
#include "Object.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::Interface::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.Interface");
    return result;
}
