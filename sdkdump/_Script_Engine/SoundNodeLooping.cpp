#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeLooping.hpp"
bool _Script_Engine::SoundNodeLooping::get_bLoopIndefinitely() {
    return (*(uint8_t*)((uintptr_t)this + 0x3c + 0)) & 1 != 0;
}
int32_t& _Script_Engine::SoundNodeLooping::get_LoopCount() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
void _Script_Engine::SoundNodeLooping::set_bLoopIndefinitely(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeLooping::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeLooping");
    return result;
}
