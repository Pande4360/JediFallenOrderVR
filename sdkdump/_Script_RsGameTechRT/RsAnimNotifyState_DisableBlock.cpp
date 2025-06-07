#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RsConditionalAnimNotifyState.hpp"
#include "RsAnimNotifyState_DisableBlock.hpp"
bool _Script_RsGameTechRT::RsAnimNotifyState_DisableBlock::get_AllowGlancingBlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x78 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAnimNotifyState_DisableBlock::set_AllowGlancingBlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x78 + 0);
    *(uint8_t*)((uintptr_t)this + 0x78 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAnimNotifyState_DisableBlock::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAnimNotifyState_DisableBlock");
    return result;
}
