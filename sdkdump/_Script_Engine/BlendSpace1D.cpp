#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlendSpace1D.hpp"
#include "BlendSpaceBase.hpp"
bool _Script_Engine::BlendSpace1D::get_bScaleAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0x148 + 0)) & 1 != 0;
}
void _Script_Engine::BlendSpace1D::set_bScaleAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x148 + 0);
    *(uint8_t*)((uintptr_t)this + 0x148 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::BlendSpace1D::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.BlendSpace1D");
    return result;
}
