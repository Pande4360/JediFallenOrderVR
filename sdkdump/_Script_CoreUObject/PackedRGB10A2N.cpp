#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "PackedRGB10A2N.hpp"
int32_t& _Script_CoreUObject::PackedRGB10A2N::get_Packed() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_CoreUObject::PackedRGB10A2N::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.PackedRGB10A2N");
    return result;
}
