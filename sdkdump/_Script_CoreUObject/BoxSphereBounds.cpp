#include "..\FUObjectArray.hpp"
#include "BoxSphereBounds.hpp"
#include "Class.hpp"
void* _Script_CoreUObject::BoxSphereBounds::get_origin() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::BoxSphereBounds::get_BoxExtent() {
    return (void*)((uintptr_t)this + 0xc);
}
float& _Script_CoreUObject::BoxSphereBounds::get_SphereRadius() {
    return *(float*)((uintptr_t)this + 0x18);
}
_Script_CoreUObject::Class* _Script_CoreUObject::BoxSphereBounds::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.BoxSphereBounds");
    return result;
}
