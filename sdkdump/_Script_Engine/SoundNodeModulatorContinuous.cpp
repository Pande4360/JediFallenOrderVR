#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SoundNode.hpp"
#include "SoundNodeModulatorContinuous.hpp"
void* _Script_Engine::SoundNodeModulatorContinuous::get_PitchModulationParams() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::SoundNodeModulatorContinuous::get_VolumeModulationParams() {
    return (void*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_Engine::SoundNodeModulatorContinuous::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.SoundNodeModulatorContinuous");
    return result;
}
