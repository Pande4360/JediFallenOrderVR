#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Vector2D.hpp"
float& _Script_CoreUObject::Vector2D::get_X() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::Vector2D::get_Y() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Vector2D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Vector2D");
    return result;
}
