#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Plane.hpp"
#include "Vector.hpp"
float& _Script_CoreUObject::Plane::get_W() {
    return *(float*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Plane::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Plane");
    return result;
}
