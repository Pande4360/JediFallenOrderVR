#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HapticFeedbackEffect_Base.hpp"
#include "HapticFeedbackEffect_Buffer.hpp"
void* _Script_Engine::HapticFeedbackEffect_Buffer::get_Amplitudes() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_Engine::HapticFeedbackEffect_Buffer::get_SampleRate() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::HapticFeedbackEffect_Buffer::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.HapticFeedbackEffect_Buffer");
    return result;
}
