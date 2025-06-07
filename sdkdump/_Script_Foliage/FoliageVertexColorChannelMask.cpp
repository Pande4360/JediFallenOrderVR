#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FoliageVertexColorChannelMask.hpp"
void _Script_Foliage::FoliageVertexColorChannelMask::set_UseMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Foliage::FoliageVertexColorChannelMask::get_UseMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_Foliage::FoliageVertexColorChannelMask::get_MaskThreshold() {
    return *(float*)((uintptr_t)this + 0x4);
}
bool _Script_Foliage::FoliageVertexColorChannelMask::get_InvertMask() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_Foliage::FoliageVertexColorChannelMask::set_InvertMask(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Foliage::FoliageVertexColorChannelMask::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Foliage.FoliageVertexColorChannelMask");
    return result;
}
