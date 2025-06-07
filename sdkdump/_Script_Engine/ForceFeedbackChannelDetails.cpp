#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ForceFeedbackChannelDetails.hpp"
bool _Script_Engine::ForceFeedbackChannelDetails::get_bAffectsLeftLarge() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
bool _Script_Engine::ForceFeedbackChannelDetails::get_bAffectsRightLarge() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 4 != 0;
}
bool _Script_Engine::ForceFeedbackChannelDetails::get_bAffectsLeftSmall() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 2 != 0;
}
void _Script_Engine::ForceFeedbackChannelDetails::set_bAffectsLeftLarge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::ForceFeedbackChannelDetails::get_bAffectsRightSmall() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 8 != 0;
}
void _Script_Engine::ForceFeedbackChannelDetails::set_bAffectsLeftSmall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::ForceFeedbackChannelDetails::set_bAffectsRightSmall(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::ForceFeedbackChannelDetails::set_bAffectsRightLarge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_Engine::ForceFeedbackChannelDetails::get_Curve() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::ForceFeedbackChannelDetails::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ForceFeedbackChannelDetails");
    return result;
}
