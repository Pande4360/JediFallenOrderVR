#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsPhysicalAnimationBlendingCustomControllerParameters.hpp"
bool _Script_RsGameTechRT::RsPhysicalAnimationBlendingCustomControllerParameters::get_UseSinusoidalCurveForBlending() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsPhysicalAnimationBlendingCustomControllerParameters::set_UseSinusoidalCurveForBlending(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsPhysicalAnimationBlendingCustomControllerParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsPhysicalAnimationBlendingCustomControllerParameters");
    return result;
}
