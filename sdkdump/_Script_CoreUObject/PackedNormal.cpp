#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "PackedNormal.hpp"
void* _Script_CoreUObject::PackedNormal::get_X() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::PackedNormal::get_Y() {
    return (void*)((uintptr_t)this + 0x1);
}
void* _Script_CoreUObject::PackedNormal::get_Z() {
    return (void*)((uintptr_t)this + 0x2);
}
void* _Script_CoreUObject::PackedNormal::get_W() {
    return (void*)((uintptr_t)this + 0x3);
}
_Script_CoreUObject::Class* _Script_CoreUObject::PackedNormal::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.PackedNormal");
    return result;
}
