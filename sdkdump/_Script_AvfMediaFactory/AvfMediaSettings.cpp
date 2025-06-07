#include "..\FUObjectArray.hpp"
#include "AvfMediaSettings.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
bool _Script_AvfMediaFactory::AvfMediaSettings::get_NativeAudioOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_AvfMediaFactory::AvfMediaSettings::set_NativeAudioOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AvfMediaFactory::AvfMediaSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AvfMediaFactory.AvfMediaSettings");
    return result;
}
