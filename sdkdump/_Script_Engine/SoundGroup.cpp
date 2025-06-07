#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundGroup.hpp"
void* _Script_Engine::SoundGroup::get_SoundGroup() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SoundGroup::get_DisplayName() {
    return (void*)((uintptr_t)this + 0x8);
}
bool _Script_Engine::SoundGroup::get_bAlwaysDecompressOnLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x18 + 0)) & 1 != 0;
}
void _Script_Engine::SoundGroup::set_bAlwaysDecompressOnLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x18 + 0);
    *(uint8_t*)((uintptr_t)this + 0x18 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::SoundGroup::get_DecompressedDuration() {
    return *(float*)((uintptr_t)this + 0x1c);
}
_Script_CoreUObject::Class* _Script_Engine::SoundGroup::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SoundGroup");
    return result;
}
