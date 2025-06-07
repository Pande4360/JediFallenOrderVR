#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "ForceFeedbackEffect.hpp"
void* _Script_Engine::ForceFeedbackEffect::get_ChannelDetails() {
    return (void*)((uintptr_t)this + 0x28);
}
float& _Script_Engine::ForceFeedbackEffect::get_Duration() {
    return *(float*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_Engine::ForceFeedbackEffect::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.ForceFeedbackEffect");
    return result;
}
