#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "DropTimecode.hpp"
void* _Script_LinearTimecode::DropTimecode::get_Timecode() {
    return (void*)((uintptr_t)this + 0x0);
}
int32_t& _Script_LinearTimecode::DropTimecode::get_FrameRate() {
    return *(int32_t*)((uintptr_t)this + 0x14);
}
bool _Script_LinearTimecode::DropTimecode::get_bColorFraming() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_LinearTimecode::DropTimecode::set_bColorFraming(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_LinearTimecode::DropTimecode::set_bRunningForward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x19 + 0);
    *(uint8_t*)((uintptr_t)this + 0x19 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_LinearTimecode::DropTimecode::get_bRunningForward() {
    return (*(uint8_t*)((uintptr_t)this + 0x19 + 0)) & 1 != 0;
}
bool _Script_LinearTimecode::DropTimecode::get_bNewFrame() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a + 0)) & 1 != 0;
}
void _Script_LinearTimecode::DropTimecode::set_bNewFrame(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_LinearTimecode::DropTimecode::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/LinearTimecode.DropTimecode");
    return result;
}
