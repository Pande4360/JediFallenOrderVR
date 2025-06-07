#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HapticFeedbackEffect_Base.hpp"
#include "HapticFeedbackEffect_SoundWave.hpp"
#include "SoundWave.hpp"
_Script_Engine::SoundWave*& _Script_Engine::HapticFeedbackEffect_SoundWave::get_SoundWave() {
    return *(_Script_Engine::SoundWave**)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_Engine::HapticFeedbackEffect_SoundWave::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HapticFeedbackEffect_SoundWave");
    return result;
}
