#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "GCObjectReferencer.hpp"
#include "Object.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::GCObjectReferencer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/CoreUObject.GCObjectReferencer");
    return result;
}
