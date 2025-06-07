#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeModulator.hpp"
_Script_CoreUObject::Class* _Script_Engine::SoundNodeModulator::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeModulator");
    return result;
}
float& _Script_Engine::SoundNodeModulator::get_PitchMin() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_Engine::SoundNodeModulator::get_PitchMax() {
    return *(float*)((uintptr_t)this + 0x3c);
}
float& _Script_Engine::SoundNodeModulator::get_VolumeMax() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_Engine::SoundNodeModulator::get_VolumeMin() {
    return *(float*)((uintptr_t)this + 0x40);
}
