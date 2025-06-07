#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FrameRate.hpp"
int32_t& _Script_CoreUObject::FrameRate::get_Numerator() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_CoreUObject::FrameRate::get_Denominator() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::FrameRate::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.FrameRate");
    return result;
}
