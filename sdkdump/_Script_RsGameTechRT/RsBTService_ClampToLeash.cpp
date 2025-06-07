#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BTService.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsBTService_ClampToLeash.hpp"
void* _Script_RsGameTechRT::RsBTService_ClampToLeash::get_LocationSourceKey() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_RsGameTechRT::RsBTService_ClampToLeash::get_ClampedLocationKey() {
    return (void*)((uintptr_t)this + 0x98);
}
float& _Script_RsGameTechRT::RsBTService_ClampToLeash::get_MultipleOfCharacterRadius() {
    return *(float*)((uintptr_t)this + 0xc0);
}
bool _Script_RsGameTechRT::RsBTService_ClampToLeash::get_bUseMultipleOfCharacterRadius() {
    return (*(uint8_t*)((uintptr_t)this + 0xc4 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsBTService_ClampToLeash::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsBTService_ClampToLeash");
    return result;
}
void _Script_RsGameTechRT::RsBTService_ClampToLeash::set_bUseMultipleOfCharacterRadius(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xc4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
