#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "PackedRGBA16N.hpp"
int32_t& _Script_CoreUObject::PackedRGBA16N::get_XY() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_CoreUObject::PackedRGBA16N::get_ZW() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::PackedRGBA16N::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.PackedRGBA16N");
    return result;
}
