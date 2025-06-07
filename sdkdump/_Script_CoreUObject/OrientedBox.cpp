#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "OrientedBox.hpp"
void* _Script_CoreUObject::OrientedBox::get_Center() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::OrientedBox::get_ExtentZ() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_CoreUObject::OrientedBox::get_AxisX() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_CoreUObject::OrientedBox::get_ExtentX() {
    return *(float*)((uintptr_t)this + 0x30);
}
void* _Script_CoreUObject::OrientedBox::get_AxisY() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_CoreUObject::OrientedBox::get_AxisZ() {
    return (void*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_CoreUObject::OrientedBox::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.OrientedBox");
    return result;
}
float& _Script_CoreUObject::OrientedBox::get_ExtentY() {
    return *(float*)((uintptr_t)this + 0x34);
}
