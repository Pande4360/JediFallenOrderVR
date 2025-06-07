#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "VirtualTexture.hpp"
#include "VirtualTextureSpace.hpp"
bool _Script_Engine::VirtualTexture::get_Rebuild() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
_Script_Engine::VirtualTextureSpace*& _Script_Engine::VirtualTexture::get_Space() {
    return *(_Script_Engine::VirtualTextureSpace**)((uintptr_t)this + 0x28);
}
void _Script_Engine::VirtualTexture::set_Rebuild(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_Engine::VirtualTexture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.VirtualTexture");
    return result;
}
