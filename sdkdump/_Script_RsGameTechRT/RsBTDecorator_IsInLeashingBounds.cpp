#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTDecorator.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTDecorator_IsInLeashingBounds.hpp"
void* _Script_RsGameTechRT::RsBTDecorator_IsInLeashingBounds::get_LocationKey() {
    return (void*)((uintptr_t)this + 0x68);
}
float& _Script_RsGameTechRT::RsBTDecorator_IsInLeashingBounds::get_MultipleOfCharacterRadius() {
    return *(float*)((uintptr_t)this + 0x90);
}
bool _Script_RsGameTechRT::RsBTDecorator_IsInLeashingBounds::get_bUseMultipleOfCharacterRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsBTDecorator_IsInLeashingBounds::set_bUseMultipleOfCharacterRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTDecorator_IsInLeashingBounds::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTDecorator_IsInLeashingBounds");
    return result;
}
