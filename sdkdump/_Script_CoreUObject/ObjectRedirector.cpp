#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Object.hpp"
#include "ObjectRedirector.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::ObjectRedirector::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.ObjectRedirector");
    return result;
}
