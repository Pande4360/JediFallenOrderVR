#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "FrameTime.hpp"
void* _Script_CoreUObject::FrameTime::get_FrameNumber() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_CoreUObject::FrameTime::get_SubFrame() {
    return *(float*)((uintptr_t)this + 0x4);
}
_Script_CoreUObject::Class* _Script_CoreUObject::FrameTime::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.FrameTime");
    return result;
}
