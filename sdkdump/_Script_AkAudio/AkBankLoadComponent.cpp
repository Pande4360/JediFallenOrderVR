#include "..\FUObjectArray.hpp"
#include "AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
void _Script_AkAudio::AkBankLoadComponent::set_bAsyncLoad(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_AkAudio::AkBankLoadComponent::get_bAsyncLoad() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
void* _Script_AkAudio::AkBankLoadComponent::get_Banks() {
    return (void*)((uintptr_t)this + 0x170);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkBankLoadComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AkAudio.AkBankLoadComponent");
    return result;
}
