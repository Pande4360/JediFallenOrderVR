#include "..\FUObjectArray.hpp"
#include "AkAcousticTexture.hpp"
#include "AkPoly.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_AkAudio::AkAcousticTexture*& _Script_AkAudio::AkPoly::get_Texture() {
    return *(_Script_AkAudio::AkAcousticTexture**)((uintptr_t)this + 0x0);
}
bool _Script_AkAudio::AkPoly::get_EnableSurface() {
    return (*(uint8_t*)((uintptr_t)this + 0x8 + 0)) & 1 != 0;
}
void _Script_AkAudio::AkPoly::set_EnableSurface(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_AkAudio::AkPoly::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AkAudio.AkPoly");
    return result;
}
