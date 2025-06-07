#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "Timecode.hpp"
int32_t& _Script_CoreUObject::Timecode::get_Hours() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_CoreUObject::Timecode::get_Seconds() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
int32_t& _Script_CoreUObject::Timecode::get_Minutes() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_CoreUObject::Timecode::get_Frames() {
    return *(int32_t*)((uintptr_t)this + 0xc);
}
_Script_CoreUObject::Class* _Script_CoreUObject::Timecode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.Timecode");
    return result;
}
bool _Script_CoreUObject::Timecode::get_bDropFrameFormat() {
    return (*(uint8_t*)((uintptr_t)this + 0x10 + 0)) & 1 != 0;
}
void _Script_CoreUObject::Timecode::set_bDropFrameFormat(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
