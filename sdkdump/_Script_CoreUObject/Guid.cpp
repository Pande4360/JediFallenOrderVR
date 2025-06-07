#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Guid.hpp"
int32_t& _Script_CoreUObject::Guid::get_B() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_CoreUObject::Guid::get_A() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_CoreUObject::Guid::get_C() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_CoreUObject::Guid::get_D() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Guid::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Guid");
    return result;
}
