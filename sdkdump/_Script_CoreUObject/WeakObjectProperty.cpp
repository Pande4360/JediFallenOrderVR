#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "ObjectPropertyBase.hpp"
#include "WeakObjectProperty.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::WeakObjectProperty::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.WeakObjectProperty");
    return result;
}
